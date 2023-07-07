#!/bin/bash

#generate the Object file
gcc -c *.c

#Create liball.a
ar rcs liball.a *.o

#remove all the object file
echo y | rm -I *.o
