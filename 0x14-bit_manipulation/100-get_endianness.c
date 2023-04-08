#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int n = 1;

	char *endian = ((char *)&n);

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}
