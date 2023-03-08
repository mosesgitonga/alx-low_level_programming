#include <stdio.h>
#include "main.h"
int helper(int n, int i);
/**
 * is_prime_number - check if num is prime
 * @n: num
 * Return: ddsnjds
 */
int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2 || n == 3)
	{
		return (1);
	}
	return (helper(n, 2));
}
/**
 * helper - helper to is_prime_number
 * @n: num
 * @i: guess
 * Return: something
 */
int helper(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (helper(n, i + 1));
}
