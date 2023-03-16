#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of size
 * @size: size of elements
 * Return:null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	ptr = (unsigned int *) calloc(nmemb, size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
}
