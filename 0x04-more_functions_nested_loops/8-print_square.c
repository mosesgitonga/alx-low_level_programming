#include "main.h"
/**
 * print_square - prints square
 * @size: size of square
 */
void print_square(int size)
{
	int i, j;

	if (size == 0)
	{
		_putchar('\n');

	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			if (j != size)
			{
				_putchar('#');

			}
			else
			{
				_putchar('\n');

			}


		}

	}
}
