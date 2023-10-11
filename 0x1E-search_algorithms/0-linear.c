#include "search_algos.h"
/**
 * linear_search - linear search for a value in array of integers
 * @array: array to search
 * @size: size of array
 * @value: the value to search for
 *
 * Return: return first accurence of target or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
