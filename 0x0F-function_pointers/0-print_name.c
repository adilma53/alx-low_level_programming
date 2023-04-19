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

void print_name(char *name, void (*f)(char *))
{
        if (name == NULL || f == NULL)
                return;





        f(name);
}