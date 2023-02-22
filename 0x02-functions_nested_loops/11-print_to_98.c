#include"main.h"
#include <stdio.h>
/**
 * print_to_98 - print num from n
 * @n: int n
 * Return: sum
 */
void print_to_98(int n)
{
	

	while (n >= 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");

		}
		n--;

	}
	while (n < 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(", ");

		}
		n++;
	}
	printf("\n");
	
}
