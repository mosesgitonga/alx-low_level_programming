#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - prints duplicate
 * @str: string
 * Return: dup
 */
char *_strdup(char *str)
{
	char *dup;
	size_t len = sizeof(str);

	if (str == NULL)
		return (NULL);


	dup = malloc(len + 2);
	if (dup != NULL)
		memcpy(dup, str, len + 2);
	return (dup);
}
