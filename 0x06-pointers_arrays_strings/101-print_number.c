#include "main.h"

/**
  * print_number - prints an integer
  * @n: Integer to print
  *
  * Return: void (nothing)
  */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
