#include "main.h"

/**
* _strcpy -  that copies the string to another distination
* @dest: source
* @src: distination
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

return (dest);
}
