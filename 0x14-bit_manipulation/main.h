#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>


int get_bit(unsigned long int n, unsigned int index);



void print_binary(unsigned long int n);







int set_bit(unsigned long int *n, unsigned int index);



unsigned int binary_to_uint(const char *b);
#endif
