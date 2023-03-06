#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: char
 * Return: null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
	}
	return (NULL);
}
