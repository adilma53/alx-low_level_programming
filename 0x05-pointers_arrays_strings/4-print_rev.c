#include "main.h"

/**
*print_rev - function that prints a string i nreverse
*@str : string
*Return: nothing
*/


void print_rev(char *str)
{

int i;
int size;

while (str[size] != '\0')
{
size++;
}


for (i = size - 1 ; i >= 0 ; i--)
{

_putchar(str[i]);

}

_putchar(10);

}
