#include <stdio.h>

/** By -{adilma53}- */

/**
* main - this function print number of arguments passed
* passed to the program.
*
* @argc: argument count.
* @argv: arguments vector.
*
* Return: 0
*
*/


int main(int argc, char *argv[])
{

int i;

for (i = 0; i < (argc - 1); ++i)
{
printf("%s\n", argv[i]);
}


return (0);

}
