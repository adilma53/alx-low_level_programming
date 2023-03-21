#include "main.h"

/**
 * main - prints alphabets
 *
 * Return: always 0.
 */

int main(void)
{

	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');
}
