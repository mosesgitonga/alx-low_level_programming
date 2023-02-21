#include "main.h"
/**
 * _isalpha - checks if lower or
 * uppercase
 *
 * @c: now is defined
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
