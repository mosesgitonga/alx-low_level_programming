#include "main.h"
/**
 * _islower(int c) - Entry point
 *
 * Return: Always 0 (succes)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
