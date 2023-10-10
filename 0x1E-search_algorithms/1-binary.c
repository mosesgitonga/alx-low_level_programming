#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where the value is located or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    int l, r, m, i;

    l = array[0];
    r = array[size - 1];

    if (size == 0 || array == NULL)
    {
        return -1;
    }

    while (l <= r)
    {
        m = (l + r) / 2;
        printf("Searching in array: ");
        for (i = l; i <= r; i++)
        {
            printf("%d", i);
            if (i < r)
            {
                printf(", ");
            }
        }
        printf("\n");
        if (array[m] < value)
        {
            l = m + 1;
        }
        else if (array[m] > value)
        {
            r = m - 1;
        }
        else
        {
            return m;
        }
    }
    return -1;
}
