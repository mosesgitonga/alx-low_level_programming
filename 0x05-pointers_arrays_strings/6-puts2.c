#include <stdio.h>
#include <string.h>
#include  "main.h"
/**
 * puts2 - prints even numbers
 * @str: input
 */
void puts2(char *str)
{
	int i;
	int length = strlen(str);

	for (i = 0; i <= length - 1; i++)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i += 2;
		}
		_putchar('\n');
	}

}
