#include <stdio.h>
#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
        unsigned int count = 0;
        int i, j;

        for (i = 0; i != '\0'; i++)
        {

                for (j = 0; j != '\0'; j++)
                {
                        if (s[i] == accept[j])
                        {
                                count++;
                                break;
                        }
                }
		if (!accept[j])
		{
			return (count);
		}
                

        }
	return (count);

}
