#include <stdio.h>
#include <string.h>
#include  "main.h"

void puts2(char *str)
{
	int i = 0;

	while (i != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
