#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* by adilma53 */

/**
* alloc_grid - a function that creates a 2d array and
*  initialize it with zeros.
*
* @height: 2d array rows
* @width: 2d array columns
*
*
* Return: the 2d array "matrix"
*/

int **alloc_grid(int width, int height)
{

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);


	int col, fr, ppl = 0, i, j;
	int **matrix;

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	for (col = 0; col < height; ++col)
	{
		matrix[col] = malloc(width * sizeof(int));
		if (matrix[col] == NULL)
		{
			for (fr = 0; fr < i; fr++)
				free(matrix[fr]);

			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}

