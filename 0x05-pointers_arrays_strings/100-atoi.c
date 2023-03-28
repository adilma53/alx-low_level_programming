#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
    int sign = 1, result = 0;

    while (*s)
    {
        if (*s == '-')
        {
            sign = -1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            result = result * 10 + (*s - '0');
        }
        else if (result != 0)
        {
            break;
        }
        s++;
    }

    return sign * result;
}
