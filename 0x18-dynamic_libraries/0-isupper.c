#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - chacks if number is upper
 *
 * @c: input
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
