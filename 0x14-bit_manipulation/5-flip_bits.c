#include "main.h"
/**
 * flip_bits - flips
 * @n: value num
 * @m: value num
 * #
 *Return: count;
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != m)
	{
		if ((n & 1) != (m & 1))
		{
			count++;
		}
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
