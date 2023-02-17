#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
