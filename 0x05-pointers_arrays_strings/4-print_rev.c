#include "main.h"

/**
*print_rev - function that prints a string i nreverse
*@s : string
*Return: nothing
*/


void print_rev(char *s)
{
int i;
int size;

i = 0;

while (s[size] != '\0')
{
size++;
}



for (i = size - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
