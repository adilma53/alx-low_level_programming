#include "main.h"

/**
 * get_bit - returns the value of a bit at specific index.
 *
 * @n: number to perform on
 * @index: the index of the bit to get.
 *
 * Return: the value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
