#!/bin/bash

# Create a Dynamic Library
gcc -c -fPIC $1

# Combine the Object Files into .so file
gcc -shared -o $2 $3
