#include <stdio.h>
#include <wchar.h>
#include <locale.h>

/**
 * puts2 - Prints every other character of a string, starting with the first character,
 *         followed by a new line.
 * @str: The input string.
 */
void puts2(char *str)
{
    setlocale(LC_ALL, ""); // Set the locale to handle UTF-8 characters

    wchar_t wide_str[100]; // Assuming a maximum string length of 100
    mbstowcs(wide_str, str, 100); // Convert the string to wide characters

    int i;

    for (i = 0; wide_str[i] != L'\0'; i += 2)
    {
        putwchar(wide_str[i]);
    }

    putwchar(L'\n');
}
