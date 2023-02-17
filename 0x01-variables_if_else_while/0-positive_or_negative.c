#include <stdio.h>
/*
 * main - Entry Point
 *
 * Return: 0 Always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", &d);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", &d);
	}
	else
	{
		printf("%d is negative\n", &d);
	}
	return (0);
}
