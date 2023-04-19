#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - this function searches for an integer
 * @array: this is a pointer to an array of integers
 * @size: this is the size of the array
 * @cmp: this is a pointer to a function
 *
 * Return: return first element of array or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
        int i;

        if (array != NULL && cmp != NULL)
        {
                for (i = 0; i < size; i++)
                {
                        if (cmp(array[i]) != NULL)
                                return (i);
                }
        }

        return (-1);
}
