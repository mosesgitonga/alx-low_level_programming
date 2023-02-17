#include <stdio.h>
/**
 * main - Entry point, prints lowercase alphabet except for 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b != 'e' && b != 'q')
		{
			putcher(b);
		}
	putcher('\n')
	return (0);
	}
}
