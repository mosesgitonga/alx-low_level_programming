#include <stdio.h>
/**
 * factors - finds factors
 * main - execution of function
 * @n: var
 * Return: 0
 */
int factors(long int n)
{
	long int i;


	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			printf("%ld", i);
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



	factors(612852475143L);

	return (0);
}
