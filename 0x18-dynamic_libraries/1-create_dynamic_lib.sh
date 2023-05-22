#!/bin/bash

gcc -Wall -Wextra -Werror -pedantic -c -fPIC 0-putchar.c
gcc -Wall -Wextra -Werror -pedantic -c -fPIC 2-strlen.c
gcc -Wall -Wextra -Werror -pedantic -c -fPIC 2-strncpy.c
gcc -Wall -Wextra -Werror -pedantic -c -fPIC 0-isupper.c
gcc -Wall -Wextra -Werror -pedantic -c -fPIC 0-strcat.c
gcc -Wall -Wextra -Werror -pedantic -c -fPIC 100-atoi.c
gcc -Wall -Wextra -Werror -pedantic -c -fPIC 1-strncat.c
gcc -Wall -Wextra -Werror -pedantic -c -fPIC 3-islower.c
gcc -Wall -Wextra -Werror -pedantic -c -fPIC 4-isalpha.c
gcc -Wall -Wextra -Werror -pedantic -c -fPIC 6-abs.c

gcc -shared -o liball.so 0-putchar.o 2-strlen.o 2-strncpy.o 0-isupper.o 0-strcat.o 100-atoi.o 1-strncat.o 3-islower.o 4-isalpha.o 6-abs.o

export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

