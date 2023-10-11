#include "search_algos.h"

/**
 * exponential_search - search for value in array
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: return first accurence of target or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	int bound = 1;

	while (bound < (int)size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	int left = bound / 2;
	int right = (bound < (int)size - 1) ? bound : (int)size - 1;

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (int i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
