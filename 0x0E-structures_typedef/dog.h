#ifndef MY_DOG_H
#define MY_DOG_H

/**
 * struct dog - dog structure
 * @name: name of dog
 * @age: the age of dog
 * @owner: owner of dog
 *
 * Description: this structure define dog name age and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


/* MY FUNCTIONS PROTOTYPES*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
int _strlen(char *str);
char *_strcopy(char *dest, char *src);




#endif
