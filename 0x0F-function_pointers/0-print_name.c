#include <stdio.h>
#include "function_pointers.h"


/* by adilma53 */

/**
 * print_name - ___
 * @name: ____
 * @f: ___
 * Return: _____
*/

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;






	f(name);

}
