#include <stdio.h>
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    /* Handle leading whitespace */
    while (s[i] == ' ')
        i++;

    /* Handle sign */
    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    /* Skip over non-digit characters */
    while (!(s[i] >= '0' && s[i] <= '9'))
        i++;

    /* Convert string to integer */
    while (s[i] >= '0' && s[i] <= '9')
    {
        /* Check for integer overflow */
        if (result > (INT_MAX - (s[i] - '0')) / 10)
        {
            if (sign == 1)
            {
                return INT_MAX;
            }
            else
            {
                return INT_MIN;
            }
        }

        result = result * 10 + (s[i] - '0');
        i++;
    }

    return result * sign;
}
