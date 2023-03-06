#include <stdio.h>
#include <string.h>

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination = dest;

	for (i = 0; i < n; i++)

	{
		*(dest + i) = *(src + i);

	}
	return (destination);
}
