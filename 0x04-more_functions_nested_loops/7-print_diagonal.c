#include "main.h"

/**
  * print_diagonal - draw a diagonal line on the terminal
  * @n: The number of times to print '\'
  *
  * Description - The diagonal should end with a '\n'
  * If @n is 0 or less, the function should only
  * print a '\n'
  */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				} else
				{
					_putchar(' ');
				}
			}
		}
	} else
	{
		_putchar('\n');
	}
}
