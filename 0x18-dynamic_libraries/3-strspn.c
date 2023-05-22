#include <stdio.h>
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;
	int i, j;

	for (i = 0; i != '\0'; i++)
	{
		found = 0;
		
		for (j = 0; j != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		}
		return (count);
	}

}
