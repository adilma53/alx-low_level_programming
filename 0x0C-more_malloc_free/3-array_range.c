#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* by adilma53 */

/**
 * array_range - this function creates an array of integers
 * and populate it from min to max.
 *
 * @min: input
 * @max: input
 *
 * Return: my_arr
 */

int *array_range(int min, int max)
{
	int *my_arr;
	int i;
	int length = (max - min) + 1;

	if (min > max)
		return (NULL);


	my_arr = malloc(length * sizeof(int));
	if (my_arr == NULL)
		return (NULL);


	for (i = 0; i < length; i++)
	{
		if (min <= max)
		{
			my_arr[i] = min;
			min++;
		}
	}

	return (my_arr);
}
