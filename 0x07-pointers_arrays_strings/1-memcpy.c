#include <stdio.h>
#include <string.h>
/**
 * _memcpy -  copy memoy area
 * @dest: destination
 * @src: source
 * @n: range
 * Return: destination
 */
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
