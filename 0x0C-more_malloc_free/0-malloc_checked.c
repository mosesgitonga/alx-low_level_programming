#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - to check i f is malloc or not
 * @b: int
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p != NULL)
	{
		return (p);
	}
	exit(98);
}
