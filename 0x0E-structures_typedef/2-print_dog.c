#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - functions that prints the contents of struct
 *
 * @d: pointer to dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{

	if (!d)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";



	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

}
