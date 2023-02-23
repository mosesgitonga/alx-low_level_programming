#include <stdio.h>
int main(void)
{
	int i;
	for (i = 1; i <= 99; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("Fizz Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");

		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
