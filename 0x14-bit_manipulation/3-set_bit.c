#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 in a specific index
 * @n: number to modify
 * @index: index to modify
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		*n |= 1 << index;
		return (1);
	}
}
