#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 *
 * Return: nothing.
 */

void more_numbers(void)
{

int i;
int j;

for (i = 0; i < 10; i++)
{

for (int j = 0; j < 15; j++)
{

if (j > 9)
{
putchar(j / 10 + '0');
putchar(j % 10 + '0');
}
else
{
putchar(j % 10 + '0');
}

}
putchar('\n');
}

}
