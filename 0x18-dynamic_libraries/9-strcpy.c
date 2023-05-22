#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcpy - copies strings
 * @dest: pointer
 * @src: pointer
 * Return: res
 */

char *_strcpy(char *dest, char *src)
{
	char *res;

	res = strcpy(dest, src);
	return (res);
}
