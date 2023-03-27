#include "main.h"

/**
*_strlen - function that returns length of string
*@s : input
*
*return : length
*/

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}
