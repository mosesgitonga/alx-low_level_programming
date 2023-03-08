#include "main.h"
#include <stdio.h>
int  helper(int n, int i);
/**
 * _sqrt_recursion - square root
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
/**
 * helper - helps sqrt
 * @n: number
 * @i: guess
 * Return: 0
 */


int helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (helper(n, i + 1));
}
