#include "main.h"

/**
 * print_number - print an integer
 * @n: Number to be printed
 */
void print_number(int n)
{
	unsigned int n2;

	if (n < 0)
	{
		_putchar('-');
		n2 = -n;
	} else
	{
		n2 = n;
	}

	if (n2 / 10)
	{
		print_number(n2 / 10);
	}

	_putchar((n2 % 10) + '0');
}
