#include <stdio.h>
#include "main.h"
/**
 * _strstr - search for a string
 * @haystack: original string
 * @needle: string to be searched
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *haystack != '\0'; i++)
	{
		for (j = 0; *needle != '\0'; j++)
		{
			if (((haystack[i + j])) != ((needle[j])))
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
	}
	return (NULL);
}
