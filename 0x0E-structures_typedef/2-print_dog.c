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

	char *name;

	if (d->name == NULL)
		name = "(nil)";
	else
		name = d->name;

	float age = d->age;

	char *owner;

	if (d->owner == NULL)
		owner = "(nil)";
	else
		owner = d->owner;


	printf("Name: %s\n", name);
	printf("Age: %f\n", age);
	printf("Owner: %s\n", owner);
}
