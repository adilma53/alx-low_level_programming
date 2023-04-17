#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* _strcpy -  that copies the string to another distination
* @dest: distination
* @src: source
* Return: destination
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}



/**
*_strlen - function that returns length of string
*@s : input
*Return: length of string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

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


	name_clone = malloc(_strlen(name) + 1);
	if (name_clone == NULL)
	{
		free(my_doge);
		return (NULL);
	}

	owner_clone = malloc(_strlen(owner) + 1);
	if (owner_clone == NULL)
	{
		free(name_clone);
		free(my_doge);
		return (NULL);
	}


	_strcpy(name_clone, name);
	_strcpy(owner_clone, owner);


	my_doge->name = name_clone;
	my_doge->age = age;
	my_doge->owner = owner_clone;

	return (my_doge);
}
