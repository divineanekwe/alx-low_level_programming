#include "main.h"

/**
  * print_triangle - prints a triangle
  * @size: The size of the triangle
  *
  * Description - If @size is 0 or less,
  * print only a new line
  * Use '#' to print the triangle
  */
void print_triangle(int size)
{
	int i, j, k;
	int space, sign;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			space = size - i;
			sign = size - space;
			for (j = 0; j < space; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < sign; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
