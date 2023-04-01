#include "main.h"

/**
* reverse_array - reverse an array
* @a: array input.
* @n: array length
* Return: nothing
*/

void reverse_array(int *a, int n)
{

int j = 0, temp;


while (j < n)
{
n--;
temp = a[j];
a[j] = a[n];
a[n] = temp;
j++;
}
}
