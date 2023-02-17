#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the last digit of a random number.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n > 5) && (n != 0))
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
