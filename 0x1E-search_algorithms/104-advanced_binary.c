#include "search_algos.h"

/**
 * advanced_binary_recurive - search for value in array
 * @array: array to search in
 * @left: left
 * @right: right
 * @value: value to search for
 *
 * Return: return first accurence of target or -1 if not found
 */
int advanced_binary_recurive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
	i = left + (right - left) / 2;
	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recurive(array, left, i, value));
	return (advanced_binary_recurive(array, i + 1, right, value));
}
/**
 * advanced_binary - search for value in array
 * @array: array to search in
 * @size: size of array
 * @value: value to search for
 *
 * Return: return first accurence of target or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (advanced_binary_recurive(array, 0, size - 1, value));
}
