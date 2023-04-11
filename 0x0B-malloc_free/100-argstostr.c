#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* by adilma53 */

/**
* argstostr - this function concatenates all arguments
*  of your program and put \n new line to the end of each char.
*
* @ac: number of strings in your input
* @av: vector of strings
*
* Return: the concatenated new string newstr
*/



char *argstostr(int ac, char **av)
{
	int i, j, size, n;
	char *newstr;

	n = 0;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
		size++;
	}

	newstr = malloc(size * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		if (n > 0)
			n++;

		for (j = 0; av[i][j] != '\0'; j++)
		{
			newstr[n] = av[i][j];
			n++;
		}
		newstr[n] = '\n';
	}
	newstr[n++] = '\0';

	return (newstr);
}

