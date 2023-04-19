#ifndef function_pointers
#define function_pointers


/* libraries */
#include <stdio.h>
#include <stdlib.h>


/* prototypes */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif