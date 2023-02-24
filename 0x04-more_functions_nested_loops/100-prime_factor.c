#include <stdio.h>
/**
 * factors - finds factors
 * main - execution of function
 * @n: var
 * Return: 0
 */
int factors(int n)
{
	int i;


	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			printf("%d", i);
			n = n / i;
		}
	}
	printf("\n");
	return (0);


}
/**
 * main - execution
 * @void:empty
 * Return: 0
 */
int main(void)
{

	int result;

	result = factors(1231952);
	printf("%d", result);
	return (0);
}
