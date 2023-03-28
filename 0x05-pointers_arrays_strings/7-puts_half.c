#include "main.h"

/**
* puts_half - print half of a string
* @str: string to be printed
*/

void puts_half(char *str)
{
int length = 0;
int half;


while (str[length] != '\0')
{
length++;
}

half = length / 2;

if (length % 2 != 0)
half++;

while (half < length)
{
_putchar(str[half]);
half++;
}
_putchar('\n');
}
