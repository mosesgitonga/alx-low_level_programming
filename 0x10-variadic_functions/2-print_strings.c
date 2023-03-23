#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * print_strings - function to print strings
 * @separator: it is a space and a comma
 * @n: number of args
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int  i;
	char *x;
	va_list av;

	va_start(av, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(av, char*);

		if (x[0] != '\0')
		{
			printf("%s", x);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(av);
}
