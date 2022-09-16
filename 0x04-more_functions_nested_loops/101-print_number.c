#include "main.h"

/**
 * print_number - print an integer
 * @n: Number to be printed
 */
void print_number(int n)
{
	int th, h;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n / 10 == 0)
	{
		_putchar(n + '0');
	} else if (n / 10 >= 1 && n / 10 <= 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	} else if (n / 10 >= 10 && n / 10 <= 99)
	{
		_putchar((n / 100) + '0');
		_putchar(((n - ((n / 100) * 100)) / 10) + '0');
		_putchar(((n - ((n / 100) * 100)) % 10) + '0');
	} else if (n / 10 >= 100 && n / 10 <= 999)
	{
		th = (n / 1000) * 1000;
		h = ((n - th) / 100) * 100;
		_putchar((n / 1000) + '0');
		_putchar(((n - th) / 100) + '0');
		_putchar(((n - th - h) / 10) + '0');
		_putchar(((n - th - h) % 10) + '0');
	}
}
