#include <stdio.h>
#include "main.h"
/**
 *
 * _strbrk - function
 * @s: string
 * @accept: idonknow
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int  i, j;
	

	for (i  = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[0] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
