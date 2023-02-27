#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps a and b
 * @a:
 * @b:
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
