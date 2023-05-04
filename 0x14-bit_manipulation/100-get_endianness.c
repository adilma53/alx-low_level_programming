#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 * */

int get_endianness(void)
{
    char *c = (char *)&i;
    unsigned int i = 1;

    if (*c)
    {
        return 1; /* little endian */
    }
    else
    {
        return 0; /* big endian */
    }
}
