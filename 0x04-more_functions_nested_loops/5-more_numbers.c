#include "main.h"

/**
  * more_numbers - print 10 times the numbers,
  * from 0 to 14, followed by a new line
  */
void more_numbers(void)
{
	int i, n;
	int div, rem;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			div = n / 10;
			rem = n % 10;
			if (n >= 10)
			{
				_putchar(div + '0');
			}
			_putchar(rem + '0');
		}
		_putchar('\n');
	}
}
