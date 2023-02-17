#include <stdio.h>
/**
 * main - printing a hexadecimal
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar (x + '0');
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar (x);
	}
	putchar ('\n');
	return (0);
}
