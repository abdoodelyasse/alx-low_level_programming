#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The input string.
 */
void puts_half(char *str)
{
	if (str == NULL)
		return;

	// Find the end index of the string
	int end_index = 0;
	while (str[end_index] != '\0')
		end_index++;

	// Calculate the start index of the second half
	int start_index = (end_index + 1) / 2;

	// Print the second half of the string
	while (str[start_index] != '\0')
	{
		putchar(str[start_index]);
		start_index++;
	}

	putchar('\n');
}
