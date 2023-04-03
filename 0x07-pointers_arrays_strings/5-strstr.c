#include "main.h"
#include <stdio.h>


/**
* _strstr - a function that searches a string for any of a set of bytes.
*
* @haystack: input
* @needle: input
*
* Return: needle
*/

char *_strstr(char *haystack, char *needle)
{
int i, j, length = 0, counter = 0;

while (needle[length] != '\0')
{
length++;
}



for (i = 0; needle[i] != '\0'; i++)
{

for (j = 0; haystack[j] != '\0'; j++)
{
if (needle[i] == needle[j])
counter++;
}

}

if (length == counter)
{
return (needle);
}


return (NULL);
}
