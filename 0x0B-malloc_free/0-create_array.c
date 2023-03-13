#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of array
 * @c: string
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *string;

	string = (malloc(sizeof(char) * size));
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		string[i] = c;
	return (string);
}
