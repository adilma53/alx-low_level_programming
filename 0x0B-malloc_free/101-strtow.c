#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - this function takes a string and converts it
 * into a 2d array of strings
 *
 * @str: string to convert
 *
 * Return: the 2d array
 */

int word_count(*str)
{
	int wordcount = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i == 0 || str[i - 1] == ' ') && str[i] != ' ')
			wordcount++;
	}

	return (wordcount);
}

char **strtow(char *str)
{
	int i, j, wordcount = 0, k = 0, wordlength = 0, l;
	char **matrix;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			break;
	}
	if (str[i] == '\0')
		return (NULL);

	wordcount = word_count(*str);

	matrix = (char**)malloc((wordcount + 1) * sizeof(char *));

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < wordcount; i++)
	{
		while (str[k] == ' ')
			k++;

		wordlength = 0;

		for (l = k; str[l] != ' '; l++)
			wordlength++;

		matrix[i] = (char*)malloc((wordlength + 1) * sizeof(char));

		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}

		for (j = 0; j < wordlength; j++)
		{
			matrix[i][j] = str[k];
			k++;
		}
		matrix[i][j] = '\0';
	}
	matrix[wordcount] = NULL;
	return (matrix);
}