#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* by adilma53 */

/**
 * _calloc - this function allocates memory for my_arr
 *
 * @nmemb: input lrngth of array
 * @size: input size of elements
 *
 * Return: my_arr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *my_arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);


	my_arr = malloc(nmemb * size);
	if (my_arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		my_arr[i] = 0;
	}


	return (my_arr);
}
