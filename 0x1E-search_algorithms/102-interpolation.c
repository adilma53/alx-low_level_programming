#include "search_algos.h"

/**
 * interpolation_search - search for value in array
 * using the interpolation search algorithm
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array || size < 1)
		return (-1);

	size_t left = 0;
	size_t right = size - 1;
	size_t i;

	while (right >= left)
	{
		i = left + (((double)(right - left) /
											(array[right] - array[left])) * (value - array[left]));

		if (i < size)
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);

		if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}

	return (-1);
}
