#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}

	printf("\n");
}
