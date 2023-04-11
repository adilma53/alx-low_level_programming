#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/* by adilma53 */

/**
* create_array - this function creates an array
*       made of the input c of length size.
*
* @size: array size.
* @c: array element.
*
* Return: myarr if success and NULL if fail
*/


char *create_array(unsigned int size, char c)
{

	int j;
	char *myarr;

	myarr = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (myarr == NULL)
		return (NULL);


	for (j = 0; j < size; j++)
	{
		myarr[j] = c;
	}


	return (myarr);
}

