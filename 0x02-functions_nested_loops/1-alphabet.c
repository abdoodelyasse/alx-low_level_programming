
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		/* Replace _putchar with the appropriate output function */
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
