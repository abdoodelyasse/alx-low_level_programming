#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the string.
 *
 * Description: If the number of characters is odd, it prints the last n
 * characters of the string, where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;
	int n;

	while (str[length] != '\0') /* Calculate the length of the string */
		length++;

	n = (length - 1) / 2; /* Calculate the starting index for printing */

	if (length % 2 == 0) /* Even number of characters */
		n++;

	for (i = n; i < length; i++)
		putchar(str[i]);

	putchar('\n');
}
