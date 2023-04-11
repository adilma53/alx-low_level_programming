#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* by adilma53 */

/**
* _strdup - a function that coppies input
*   string to another.
*
* @str: input string.
*
* Return: the coppy of the original string "myarr".
*/


char *_strdup(char *str)
{
	int i = 0, j;
	char *myarr;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	i++;

	myarr = malloc(i * sizeof(char));
	if (myarr == NULL)
		return (NULL);

	for (j = 0; j < i - 1; j++)
	{
		myarr[j] = str[j];
	}

	myarr[i] = '\0';

	return (myarr);
}

