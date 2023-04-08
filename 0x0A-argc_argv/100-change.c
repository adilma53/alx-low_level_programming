#include <stdio.h>
#include <stdlib.h>

int count_change(int change, int counter);

int main(int argc,char *argv[])
{
int change = atoi(argv[1]);
int counter = 0;



if(argc < 2)
{
printf("Error\n");
return (1);
}
else
{
int result = count_change(change, counter);
printf("%d\n", result);
}


return 0;
}

int count_change(int change, int counter)
{
if (change <= 0) {
return counter;
}

if (change >= 25) {
return count_change(change - 25, counter + 1);
} else if (change >= 10) {
return count_change(change - 10, counter + 1);
} else if (change >= 5) {
return count_change(change - 5, counter + 1);
} else if (change >= 2) {
return count_change(change - 2, counter + 1);
} else {
return count_change(change - 1, counter + 1);
}
}
