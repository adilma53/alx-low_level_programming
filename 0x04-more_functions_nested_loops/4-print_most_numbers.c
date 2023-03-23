#include "main.h"

/**
 * print_numbers - print from 0 to 9.
 *
 *
 * Return: nothing.
 */

void print_numbers(void)
{

int i;

for (i = 0; i < 10; ++i)
{
if (i!= 2 && i!=4)
{
_putchar(i + '0');
}

}
_putchar('\n');
}
