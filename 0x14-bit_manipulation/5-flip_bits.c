#include "main.h"
/**
 * flip_bits - returns the number of bits to flip
 * to convert one number to another.
 *
 * @n: first number.
 * @m: second number.
 *
 * Return: number of bits to flip
 * to convert one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m; /* xor of the two numbers */
	unsigned int counter = 0;

	/* count the number of set bits in the XOR result */
	while (x)
	{
		counter += x & 1;
		x >>= 1;
	}

	return (counter);
}
