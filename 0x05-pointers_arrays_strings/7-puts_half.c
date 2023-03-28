#include "main.h"

/**
* puts_half - print half of a string
*  if string length not od prints length+1
* @str: string to be printed
*/

void puts_half(char *str)
{

int length = 0;
int half;
int i;

while (str[length] != '\0')
{
length++;
}


if (length % 2 != 0)
{
half = (length / 2) + 1;
for (i = half - 1 ; i < length; i++)
{
_putchar(str[i]);
}
}
else
{
half = (length / 2);
for (i = half ; i < length; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
