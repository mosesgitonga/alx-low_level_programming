#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - lower to uppercase
 * @str: string
 * Return: str
 */
char *string_toupper(char *str)
{
	char *i =  str;

	while (*i  != '\0')
	{
		*i = toupper(*i);
		i++;
	}
	return (str);

}
