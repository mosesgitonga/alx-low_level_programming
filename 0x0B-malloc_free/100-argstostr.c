#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - concatenate arguments
 * @ac: arg count
 * @av: arg vector
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;

	char *str;


	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	str = malloc(sizeof(char) * (len + ac + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
