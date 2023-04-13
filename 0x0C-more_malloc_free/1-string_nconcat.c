#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/** By -{adilma53}- */

/**
* string_length - calculate string length
*
* @str: input
*
* Return: length
*
*/

/**
* string_nconcat - this function concatenates s1 and s2.
* passed to the program.
*
* @s1: input
* @s2: input
* @n: input
*
* Return: newstring
*
*/

unsigned int string_length(char *str)
{
	int i = 0;

	return (length);
}



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *my_str;
	unsigned int i, j;
	unsigned int length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		length++;
		i++;
	}

	my_str = malloc((length + (n + 1)) * sizeof(char));
	if (my_str == NULL)
		return (NULL);


	for (i = 0; i < length; i++)
		my_str[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\n' ; j++)
		my_str[i + j] = s2[j];

	my_str[i + j] = '\0';

	return (my_str);
}
