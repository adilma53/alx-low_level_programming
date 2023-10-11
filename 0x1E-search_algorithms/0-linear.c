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

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (i, array[i]);
		}
	}
	return (-1);
}
