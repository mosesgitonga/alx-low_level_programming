#include <stdio.h>
/**
 * multiples - adds multiples of 3 & 5
 * @n:range to be executed
 * Return: sum
 */
int multiples(int n)
{
	int i, sum = 0;

	for (i = 0; i <= n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	return (sum);
}
/**
 * main - executes function
 *
 * Return: 0
 */
int main(void)
{
	int result;

	result = multiples(1023);
	printf("%d\n", result);
	return (0);
}
