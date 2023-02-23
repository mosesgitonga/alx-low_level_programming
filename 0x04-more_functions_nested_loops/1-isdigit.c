#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks wheher is digit
 * @c: num or char
 * Return: 0
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)

	{
		if (c == i + '0')
		{
			return (1);
		}
		return (0);
	}
	return (0);

}
