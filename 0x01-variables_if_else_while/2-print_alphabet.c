#include <stdi.h>
/**
 * main - Entry point
 *
 * Description: Program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;

	for (a = 'a', a <= 'z', a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
