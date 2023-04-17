#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new struct
 *
 * @name: doge name
 * @age: doge age
 * @owner: doge owner
 *
 * Return: new struct doge / or NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_doge;
	char *name_clone;
	char *owner_clone;


	my_doge = malloc(sizeof(dog_t));
	if (my_doge == NULL)
		return (NULL);


	name_clone = malloc(strlen(name) + 1);
	if (name_clone == NULL)
	{
		free(my_doge);
		return (NULL);
	}

	owner_clone = malloc(strlen(owner) + 1);
	if (owner_clone == NULL)
	{
		free(name_clone);
		free(my_doge);
		return (NULL);
	}


	strcpy(name_clone, name);
	strcpy(owner_clone, owner);


	my_doge->name = name_clone;
	my_doge->age = age;
	my_doge->owner = owner_clone;

	return (my_doge);
}
