#include <stdio.h>
/**
* main - prints a combination of numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x, j, k;

	for (x = 0; x < 8; x++)
	{
		for (j = x + 1; j < 9; j++)
		{
			k = ((x * 10) + j);
			putchar ((k / 10) + '0');
			putchar ((k % 10) + '0');

			if (k < 89)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
