#include"main.h"
/**
 * print_alphabet_x10 - print
 * alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i, k = 1;

	while (k <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar (i);

		}
		_putchar('\n');
		k++;
	}
}
