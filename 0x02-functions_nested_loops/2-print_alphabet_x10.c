#include "main.h"

/**
 * print_alphabet - prints alphabets 10 times.
 *
 * Return: always 0.
 */

void print_alphabet(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
