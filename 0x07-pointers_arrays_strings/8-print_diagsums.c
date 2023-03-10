#include <stdio.h>
#include  "main.h"
#include <stdlib.h>
/**
 * print_diagsums - add diagonals
 * @a: array
 * @size:  size
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		sum1 += a[i];
	}
	for (j = 0; j < size * size - 1; j += size - 1)
	{
		sum2 += a[j];
	}
	_putchar(sum1 + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(sum2 + '0');
}
