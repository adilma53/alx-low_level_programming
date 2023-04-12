#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments of a program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, length = 0, k = 0;
	char *newstr;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
		length++;
	}


	newstr = malloc(sizeof(char) * (length + 1));
	if (newstr == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			newstr[k] = av[i][j];
			k++;
		}

		newstr[k++] = '\n';
	}

	newstr[k] = '\0';

	return (newstr);
}
