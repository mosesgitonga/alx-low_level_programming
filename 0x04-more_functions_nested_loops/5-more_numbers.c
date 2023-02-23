#include "main.h"
/**
 * more_numbers - creates row range to 14
 *  and 10 times in a column
 *  @void: void
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			
				_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			
			
			
		
		}
		_putchar('\n');

	}
	
}
