#include "main.h"


/**
*print_rev - function that prints a string i nreverse
*@s : string
*Return: nothing
*/

void print_rev(char *s)
{


int i, j = 0, size;


while (s[j] != '\0')
{
j++;
}

size = j;

for (i = size - 1; i >= 0; i--)
{

_putchar(s[i]);

}

_putchar('\n');
}
