#include "main.h"

/**
*swap_int - function that swaps two ints using pointers
*@a : input
*@b : input
*return : nothing
*/

void swap_int(int *a, int *b)
{
int temporary;
temporary = *a;
*a = *b;
*b = temporary;

}
