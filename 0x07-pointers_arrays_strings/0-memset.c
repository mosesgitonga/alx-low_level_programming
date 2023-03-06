#include <stdio.h>
/**
 * _memset - fill memory with a constant byte
 * @s: pointer
 * @b: constant byte
 * @n: number of  iteration
 *
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	char *p = s;

	for (i = 0; i < n; i++)
	{
		*p++  = b;

	}
	return (s);

}
