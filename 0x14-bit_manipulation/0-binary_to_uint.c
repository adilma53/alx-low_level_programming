#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: pointer to array of binary 0 and 1
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	unsigned int i = 0;

	if (!b)
		return (0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		number = number << 1;

		if (b[i] == '1')
			number += 1;
	}

	return (number);
}
