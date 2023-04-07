#include "main.h"
/**
 * clear_bit - sets bit at index to 0
 * @n: value
 * @index: index 
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
