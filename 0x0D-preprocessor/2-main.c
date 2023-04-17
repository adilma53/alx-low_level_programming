#include <stdio.h>

/**
*main - this programm print the .c  file it compiled from.
*
*Return: 0
*/

int main(void)
{



	if (__FILE__ != NULL)
		printf("%s\n", __FILE__);



	return (0);
}
