#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search for a value in an array
 * @array: array to iterate in.
 * @size: size of the array.
 * @value: value to search for.
 * Return: -1 if not found, index of value if found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (size == 0)
    {
        return (-1);
    }

    while (i < size)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
        i++;
    }
    return (-1);
}
