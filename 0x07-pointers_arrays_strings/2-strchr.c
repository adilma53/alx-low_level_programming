#include "main.h"
/**
* _strchr - searching for c in s
*
* @s: input
* @c: input
*
* Return: string dest
*/

char *_strchr(char *s, char c)
{


int i;
char temp;

for (i = 0; i != '\0'; i++)
{
if (s[i] == c)
{
s[i] = temp;
break;
}
}

return (temp);


}
