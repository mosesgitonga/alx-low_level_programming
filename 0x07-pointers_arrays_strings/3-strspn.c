#include <stdio.h>
#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string
 * @accept: match
 * Return: count
 */


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
