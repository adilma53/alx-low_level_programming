#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* by adilma53 */

/**
* free_grid - this function free
*   a 2d array from memory.
*
* @grid: 2d array to free.
* @height: array rows.
*
* Return: nothing
*/


void free_grid(int **grid, int height)
{

	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}

	free(grid);
}

