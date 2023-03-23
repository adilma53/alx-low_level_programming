#include "main.h"

/**
 * _islower - is char lower or upper case ?.
 * @c: character input.
 * Return: Returns 1 if c is upper , Returns 0 otherwise.
 */

int _islower(int c)
{

    if (c >= 65 && c <= 90)
    {
        return (1);

    }
    else
    {
        return (0);
    }

}
