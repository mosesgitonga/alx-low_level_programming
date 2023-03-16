#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * array_range - prints array range
 * @min: start of range
 * @max: end of range
 * Return: array
 */

int *array_range(int min, int max)
{
	int size, *arr, i;

	size = max - min;

	arr = (int *) malloc(sizeof(int) * size);

	if (min > max)
		return (NULL);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;

	}
	return (arr);
}
