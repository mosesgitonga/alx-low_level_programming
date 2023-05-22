#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares string1 to sstring2
 * @s1: string1
 * @s2: string2
 * Return: int comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
