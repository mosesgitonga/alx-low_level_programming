#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _pow_recursion - recursion
 * @x: num
 * @y: power
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
