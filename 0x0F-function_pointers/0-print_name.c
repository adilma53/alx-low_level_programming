#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - function that prints a name
*
* @name: input
* @f: input
*
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{


	(*f)(name);


}