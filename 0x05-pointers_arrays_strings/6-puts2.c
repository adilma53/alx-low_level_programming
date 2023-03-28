#include "main.h"

/**
* puts2 - print every charachter of string
* @str: string to be printed
*/

void puts2(char *str)
{

int j=0;

while (str[j] != '\0')
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
