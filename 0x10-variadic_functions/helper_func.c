#include "variadic_functions.h"

/**
* _seperator - trick -_0
*
* @format: format string
* @i: _________
* Return: nothing
*/

void _seperator(const char * const format, unsigned int i)
{
	if (format[i] != '\0')
		printf(", ");
}

