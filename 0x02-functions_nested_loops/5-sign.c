#include "main.h"

/**
 * print_sign - checks if n value.
 * @n: input.
 * Return: Returns 1 if n is posotove 0, if n=0 , Returns -1 if n negative.
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (-1);
	}
}
