#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps a and b
 * @a:pointer a
 *
 * @b:pointer b
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
