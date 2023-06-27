#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * main - Entry point of the program
 *
 * Return: 1
 */
int main(void)
{
	int fd;
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = strlen(message);

	fd = open("/dev/stderr", O_WRONLY);
	if (fd == -1)
		return (1);

	if (write(fd, message, len) != len)
	{
		close(fd);
		return (1);
	}

	close(fd);
	return (1);
}
