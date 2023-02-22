#include"main.h"
/**
 * print_to_98 - print num from n
 * @n: int n
 * Return: sum
 */
void print_to_98(int n)
{
	int x;

	for (x = n; x <= 98; x++)
	{
		if (x < 0)
		{
			_putchar ('x');
		}
		else if (x <= 99)
		{
			_putchar ((x / 10) + '0');
			_putchar ((x % 10) + '0');

		}
		else
		{
			_putchar (((x / 100) + '0'));
			_putchar (((x / 10) % 10) + '0');
			_putchar ((x % 10) + 'n');
		}
		if (x < 98)
		{
			_putchar (',');
			_putchar (' ');
		}
	}
	_putchar ('\n');
	
}
