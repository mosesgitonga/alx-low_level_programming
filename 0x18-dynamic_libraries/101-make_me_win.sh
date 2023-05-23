#!/bin/bash
gcc -fPIC -shared libinjection.so -o injection.c
export LD_PRELOAD=/alx-low_level_programming/0x18-dynamic_libraries/libinjection.so
