#!/bin/bash
gcc -wall -wextra -werror -pedantic -c *.c
ar rcs liball.a *.o
