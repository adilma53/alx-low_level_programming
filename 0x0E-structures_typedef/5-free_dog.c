#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the memory allocated for the dog
 * @d: pointer to the dog structure to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
