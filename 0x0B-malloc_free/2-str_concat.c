#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - concatenate 2 strings
 * @s1: strin1
 * @s2: string2
 * Return: saved
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, i, j;
	char *saved;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	saved = malloc((s1_len + s2_len + 1) * sizeof(char));

	if (saved == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		saved[i] = s1[i];
	for (j = 0; j <= s2_len; j++)
		saved[i + j] = s2[j];

	return (saved);
}
