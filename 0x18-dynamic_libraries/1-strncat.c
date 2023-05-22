#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - concatenatinatin strings
 * @dest: destination
 * @src: source
 * @n: size
 * Return: dst
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);

}
