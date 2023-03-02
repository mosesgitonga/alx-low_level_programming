#include <stdio.h>
#include "main.h"
#include <string.h>
#include <unistd.h>
char *leet(char *str)
{
	int i,j;

	char leetlet[] = "AaEeoOtTlL";
	char leetnum[] = "4433007711";
	int n;

	n = strlen(leetlet);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (str[i] == leetlet[j])
			{
				str[i] = leetnum[j];
				break;
			}
		}
	}
	return (str);
}
