#include <stdio.h>
#include "search_algos.h"
/**
*
*/
int binary_search(int *array, size_t size, int value)
{
    int l, r, m, i;

    l = array[0];
    r = array[size -1];

    if (size == 0 || array == NULL)
    {
        return -1;
    }

    while (l <= r)
    {

        m = (l + r) / 2;
        printf("Searching in array: ");
        for (i = m; i <= r; i++)
        {
            printf("%d", i);
            if (i <= r)
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
