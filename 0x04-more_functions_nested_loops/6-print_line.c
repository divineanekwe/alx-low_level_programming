#include "main.h"

/**
  * print_line - draw a straight line in the terminal
  * @n: The number of times to print '_'
  *
  * Description - The line should end with a '\n'
  * If @n is 0 or less, the function will only
  * print '\n'
  */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
