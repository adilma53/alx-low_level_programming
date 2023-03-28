#include "main.h"


/**
*print_rev - function that prints a string i nreverse
*@s : string
*Return: nothing
*/

void print_rev(char *s)
{
int i=0, j, size;



while (s[j] != '\0')
{
j++;
}

size = i;

for (i = size - 1; i >= 0; i--)
{
_putchar(s[i]);
}
