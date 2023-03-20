#include <stdio.h>

/**
 * main - print all two-digit combinations without repeating digits.
 *
 * Return: always 0
 */

int main(void)
{
	int i, tens_digit, ones_digit;

	for (i = 0; i < 100; i++)
	{
		tens_digit = i / 10;
		ones_digit = i % 10;

		if (tens_digit >= ones_digit)
			continue;


		putchar(tens_digit + '0');
		putchar(ones_digit + '0');

		if (i < 89)
			putchar(', ');
	}

	putchar('\n');

}
