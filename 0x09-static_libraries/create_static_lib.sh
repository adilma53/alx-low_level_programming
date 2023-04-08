#!/bin/bash

#By -{adilma53}-

#turning all .c files into object files
gcc -Wall -pedantic -Werror -Wextra -c ./*.c

#adding all object files to my library
ar -rc liball.a ./*.o
