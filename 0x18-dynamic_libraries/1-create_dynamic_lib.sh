#!/bin/bash

# Create a Dynamic Library
gcc -c -fPIC *.c

# Combine the Object Files into .so file
gcc -shared -o libdynamic.so *.o

# Verify the library

nm -D libdynamic.so
