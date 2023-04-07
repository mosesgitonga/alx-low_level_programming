#include "main.h"
/**
 * set_bit - set bit at index
 * @index: index
 * @n: value
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) *  8)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);

}
