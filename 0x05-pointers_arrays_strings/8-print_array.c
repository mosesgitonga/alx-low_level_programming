#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_array - printing values
 * in array
 * @a: array
 * @n: range
 */


void print_array(int *a, int n)
{
	int i;


	for (i = 0; i < n; i++)
	{

		printf("%d", a[i]);

		if (i != 4)
		{
			printf(", ");
		}
	}
	printf("\n");
}
