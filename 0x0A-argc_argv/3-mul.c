#include <stdio.h>
#include <stdlib.h>

/** By -{adilma53}- */

/**
* main - this function multiplies two commad line arguments.
*
* @argc: argument count.
* @argv: arguments vector.
*
* Return: 0
*
*/


int main(int argc, char *argv[])
{

if (argc >= 3)
{

printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
}
else
printf("Error");

return (0);

}
