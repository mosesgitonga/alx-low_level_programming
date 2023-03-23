#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_all - printing anything
 * @format: format of input
 */
void print_all(const char * const format, ...)
{

	int i;
	char  *x, *space;

	va_list arg;

	va_start(arg, format);
	i = 0;
	while (format && format[i])
	{
		space = " ";
		if (format[i + 1])
			space = ", ";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(arg, int), space);
				break;
			case 'i':
				printf("%d%s", va_arg(arg, int), space);
				break;
			case 'f':
				printf("%f%s", va_arg(arg, double), space);
				break;

			case 's':
				x = va_arg(arg, char*);
				if (x == NULL)
				{
					printf("(nil)");
				}
				printf("%s%s", x, space);
				break;
		}
		space++;
		i++;
	}
	printf("\n");
	va_end(arg);
}
