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

    if (s == NULL || *s == '\0') {
        return 0; /* Empty string or NULL input, return 0 */
    }

    while (s[i] == ' ')
        i++;

    while (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }

    while (!(s[i] >= '0' && s[i] <= '9'))
    {
        if (s[i] == '\0')
            return 0; /* No numbers found, return 0 */
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
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
