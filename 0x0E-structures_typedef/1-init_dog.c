#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - this function initialize a struct
 *
 *
 * @d: pointer to struct
 * @name: dog name
 * @age: age of dog
 * @owner: dog owner
 *
 *
 * Return: Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		in size = sizeof(struct dog);
		if (d == NULL)
			d = malloc(size);
		if (d == NULL)
			return;
	}


	d->name = name;
	d->age = age;
	d->owner = owner;
}

