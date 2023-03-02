#include <stdio.h>
#include <ctype.h>
#include "main.h"

char *cap_string(char *str)
{
	int i, j;
	

	char gbg[13] = {'(', ';', ' ',
	'.', '!', '?','(', ')', ',','}'};
	
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[0] >= 'a' && str[0] <= 'z')
		{
			str[0]= str[0] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (str[i] == gbg[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i] -= 1;
				}

			}
		}
	}	
	
	return(str);
}
