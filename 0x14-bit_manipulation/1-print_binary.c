#include "main.h"

/**
 * _putchar - writes a character to stdout.
 *
 * @c: The character to print.
 *
 * Return: On success 1. On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = 0;

	while ((n >> len) > 0)
		len++;

	len--;

	while (len >= 0)
	{
		if ((n >> len) & mask)
			_putchar('1');
		else
			_putchar('0');
		len--;
	}
}
