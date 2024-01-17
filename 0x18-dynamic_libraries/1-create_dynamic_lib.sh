#!/bin/bash

c_files=$(ls *.c)

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -fPIC -o liball.so $c_files
