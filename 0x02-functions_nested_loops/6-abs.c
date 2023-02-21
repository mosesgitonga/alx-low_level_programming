#include "main.h"
#include <stdio.h>
/**
 *  _abs - finds absolute value
 * @r: helps to do magic
 *  Return: 0
 */
int _abs(int r)
{
	if (r < 0)
	{
		int abs;

		abs = r * -1;
		return (abs);
	}
	return (r);
}
