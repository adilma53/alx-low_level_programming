#include "search_algos.h"


/**
 * binary_search - binary search algorithm function
 * @array: array to search
 * @size: size of array
 * @value: the value to search for
 *
 * Return: return first accurence of target or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (!array || size < 1)
	{
		return (-1);
	}

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		i = (left + right) / 2;
		if (array[i] == value)
		{
			return (i);
		}
		if (array[i] < value)
		{
			left = i + 1;
		}
		else
		{
			right = i - 1;
		}
	}
	return (-1);
}
