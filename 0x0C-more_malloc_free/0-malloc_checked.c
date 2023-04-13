#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* by adilma53 */

/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 *
 * @b: how much memory to alocate
 *
 * Return: myptr which is a pointer to what we alocated
 */

void *malloc_checked(unsigned int b)
{
	void *myptr;

	myptr = malloc(b);

	if (myptr == NULL)
	{
		exit(98);
	}


	return (myptr);
}
