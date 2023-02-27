#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - reverse a sentence
 * @s: var
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int middle = length / 2;
	int temp;
	int i;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i]  = s[length -i - 1];
		s[length -i - 1] = temp;
	}
}
