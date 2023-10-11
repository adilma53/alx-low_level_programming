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
    if (!array || size < 1)
        return (-1);

    for (size_t index = 0; index < size; index++)
    {
        printf("Value checked array[%lu] = [%d]\n", index, array[index]);
        if (array[index] == value)
            return (index);
    }

    return (-1);
}