#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - finding sum of all arguments
 * @n: number of parameters passed in the function
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list st;

	va_start(st, n);
	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(st, unsigned int);

		sum += x;

	}
	va_end(st);

	return (sum);
}
