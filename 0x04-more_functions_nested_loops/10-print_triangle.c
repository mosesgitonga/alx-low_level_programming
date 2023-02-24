#include "main.h"
#include <stdio.h>
void print_triangle(int size)
{
	int i, k, j;

	for (i = 1; i <= size; i++)
	{
		for (k = size; k > 1; k--)
			printf(" ");
		for (j = 1; j <= i; j++)
		{
			printf("#");

		}
		if (size == 0)
			printf("\n");
		printf("\n");
	}
}
