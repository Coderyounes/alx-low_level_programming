#!/bin/bash

# Create a Dynamic Library
gcc -c -fPIC *.c

# Combine the Object Files into .so file
gcc -shared -o liball.so *.o
