#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - conatenating string with the help of malloc
 * @s1: string1
 * @s2: string2
 * @n: length of sec string to be concatenated
 * Return: concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *concat;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	len1 = strlen(s1);
	len2 = strlen(s2);
	concat = malloc(len1 + n + 1);
	if (n > len2)
		n = len2;
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
}
