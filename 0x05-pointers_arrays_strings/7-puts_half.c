#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - program that prints
 * of a string from the middle
 * @str: string to be computed
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int middle = length / 2;
	int i;



	for (i = middle; i <= length; i++)
	{

		putchar(str[i]);

	}
	putchar('\n');
}
