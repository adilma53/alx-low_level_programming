#include "search_algos.h"

/**
 * jump_search - binary search algorithm function
 * @array: array to search
 * @size: size of array
 * @value: the value to search for
 *
 * Return: return first accurence of target or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	if (!array || size < 1)
		return (-1);

	size_t step = sqrt(size);
	size_t left = 0;
	size_t right = 0;

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	right = right < size - 1 ? right : size - 1;

	for (; left < right && array[left] < value; left++)
		printf("Value checked array[%lu] = [%d]\n", left, array[left]);

	printf("Value checked array[%lu] = [%d]\n", left, array[left]);

	return (array[left] == value ? (int)left : -1);
}
