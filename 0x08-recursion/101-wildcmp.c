#include <stdio.h>
#include "main.h"
int helper(char s1, char s2, int start);

int wildcmp(char *s1, char *s2)
{
	if (s1 >= s2)	
	{
		return (0);
	}
	return (1);
/**	
//	return (helper(s1, s2, 0));
*/
}
int helper(char s1, char s2, int start)
{
	if (s1 != s2)
		return (0);
	return (helper(s1, s2, start + 1));
}
