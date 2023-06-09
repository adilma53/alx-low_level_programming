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


/**
* dog_t - typedef for dog
*/
typedef struct dog dog_t;

/* MY PROTOTYPES*/
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);




#endif
