#include "stdio.h"
#include "main.h"
#include <string.h>
#include <stdlib.h>
void _print_rev_recursion(char *s)
{
	if (s != NULL)
	{
		char *save = malloc(strlen(s) + 1);
		if (save == NULL)
		{
			puts("error in memory allocation");
			return;
		}
		{
			strcpy(save, s);
			_print_rev_recursion(save + 1);
			_putchar(*s);
			free(save);
		}
	}
}
