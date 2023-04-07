#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

/** By -{adilma53}- */

/**
* main - check if all argv inputs are digit charachters
* if yes print thier sum
*
* @argc: argument count.
* @argv: arguments vector.
*
* Return: success 0 / fail 1
*
*/

int main(int argc, char *argv[])
{
bool flag = false;

int i, j;

if (argc == 1)
{
printf("0\n");
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}

}

if (argv[i][j] == '\0')
{
flag = true;
}
}

if (flag)
{
int k;
int sum = 0;
for (k = 0; k < argc; k++)
{
sum += atoi(argv[k]);
}
printf("%d\n", sum);
}

return (0);
}
