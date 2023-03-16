#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if (p != NULL)
	{
		return(p);
	}
	exit(98);
}
