#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* by adilma53 */

/**
* str_concat - this function concatenates two strings
*	and it uses malloc.
*
* @s1: string 1
* @s2: string 2
*
* Return: the concatenated new string
*/


char *str_concat(char *s1, char *s2)
{

	int i = 0, j = 0, k, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		i++;
	}

	while (s1[j])
	{
		j++;
	}

	size = i + j;

	char *newstr = malloc((1 + size) * sizeof(char));

	if (newstr == NULL)
		return (NULL);


	for (k = 0; k < size; k++)
	{

		if (k < i)
			newstr[k] = s1[k];
		else
			newstr[k] = s2[k - i];
	}

	newstr[size] = '\0';

	return (newstr);
}

