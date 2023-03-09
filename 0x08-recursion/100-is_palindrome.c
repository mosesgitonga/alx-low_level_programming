#include <stdio.h>
#include  <string.h>
#include "main.h"
/**
 * helper - helps func is_palindrome
 * @n: string pointer
 * @start: starting of iteration
 * @end: endpoint
 * Return: 1 or 0
 */

int helper(char *n, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if ((n[start]) == (n[end]))
	{
		return (helper(n, start + 1, end - 1));
	}
	else
	{
		return (0);
	}

}
/**
 * is_palindrome - f:nction that returns 1 if a string is a palindrome and 0
 * @s: string
 * Return: some
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	return (helper(s, 0, len - 1));
}
