#!/bin/bash

# turning all .c files into object files
gcc -Wall -pedantic -Werror -Wextra -c ./*.c

# adding all object files to my library
ar -rc libmy.a ./*.o
