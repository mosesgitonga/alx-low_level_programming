#include "main.h"
/**
 * get_bit - get bit at a certain index
 * @index: index of the bit
 * @n: decimal num
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if (index == 0)
	{
		return (n & 0x01);
	}
	return (get_bit(n >> 1, index - 1));


}
