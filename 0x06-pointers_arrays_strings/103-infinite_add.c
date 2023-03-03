#include <stdio.h>
#include "main.h"
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int digit1, digit2, sum;

	int i, j, k= 0, carry = 0;

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i++,
	j++, k++)
	{
		digit1 = (i > 0) ? (n1[i] + '0'): 0;
		digit2 = (j > 0) ? (n2[j] + '0'): 0;	

		sum = digit1 + digit2 + carry;

		carry = sum / 10;
		r[k] = (sum % 10) + '0';

	}
	if (carry)
	{
		return (0);
	}
	if (k > size_r)
	{
		return (0);
	}
	r[k] = '\0';
	for (i =0, j = k-1; i < j; i++, j--)
	{
		char tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}
	return (r);
}
