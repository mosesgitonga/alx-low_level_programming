#include <stdio.h>
#include "main.h"
/**
 * print_number - preinting numbers
 * @n: number
 */
void print_number(int n)
{
	int d;

	if  (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	d = 1;

	while (n / d  > 9)
	{
		d = d * 10;
	}
	while (d > 0)
	{
		_putchar(((n / d) % 10) + '0');
		d = d / 10;
	}
}
