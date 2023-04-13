#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* by adilma53 */

/**
 * _realloc - this function that reallocates a memory block from old
 * pointer to a new pointer (it only locate less or equal
 *                            memory of the old size)
 *
 * @ptr: original pointer
 * @old_size: original size
 * @new_size: new size
 *
 * Return: my_ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *my_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}


	my_ptr = malloc(new_size);
	if (my_ptr == NULL)
		return (NULL);


	for (i = 0; i < old_size; i++)
	{
		if (i >= new_size)
			break;

		((char *) my_ptr)[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (my_ptr);
}
