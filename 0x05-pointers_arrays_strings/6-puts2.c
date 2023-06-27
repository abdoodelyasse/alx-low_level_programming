#include <stdio.h>

/**
 * puts2 - Prints every other character of a string, starting with the first
 *         character, until it encounters the null character ('\0').
 * @str: The input string.
 */
void puts2(char *str)
{
	if (str == NULL)
		return;

	while (*str != '\0')
	{
		if (*str != '\0')
			printf("%c", *str);
		str += 2;
	}

	printf("\n");
}
