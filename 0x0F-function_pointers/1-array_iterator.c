#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print the name
 *
 * @name: string input
 * @f: input (pointer to function)
 *
 * Return: nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;

    if (array && action)
    {
        for (i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}

