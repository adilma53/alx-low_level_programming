#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* strtow - this function takes a string and converts it
*   into a 2d array of strings
*
* @str: string to convert
*
* Return: the 2d array
*/

char **strtow(char *str)
{
	int i, j, wrdcount = 0, chartotal = 0, k = 0, wordlen = 0;
	char **matrix;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ')
			wrdcount++;
		chartotal++;
	}
	matrix = malloc((wrdcount + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < wrdcount; i++)
	{
		while (str[k] == ' ')
			k++;
		while (str[k + wordlen] != ' ' && str[k + wordlen] != '\0')
			wordlen++;
		matrix[i] = malloc((wordlen + 1) * sizeof(char));
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < wordlen; j++)
		{
			matrix[i][j] = str[k];
			k++;
		}
		matrix[i][j] = '\0';
	}
	matrix[wrdcount] = NULL;
	return (matrix);
}
