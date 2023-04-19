#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 *
 * @name: input
 * @f: input
 *
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
        if (!name && !f)
                f(name);
}

