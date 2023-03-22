#include <stdio.h>
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterating the array
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t  i = 1;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
