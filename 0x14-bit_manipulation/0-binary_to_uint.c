#include "main.h"
/**
 * binary_to_uint - converting binary to decimal
 * @b: binary code
 *Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	size_t i;

	for (i = 0; b[i] != '\0';  i++)
	{
		if (b[i] == '1')
		{
			res = (res << 1) | 1;
		}
		else if (b[i] == '0')
		{
			res <<= 1;
		}
		else
		{
			return (0);
		}
	}
	return (res);
}
