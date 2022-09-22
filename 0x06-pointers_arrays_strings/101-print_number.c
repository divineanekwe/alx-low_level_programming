#include "main.h"

/**
  * print_number - prints an integer
  * @n: Integer to print
  *
  * Return: void (nothing)
  */
void print_number(int n)
{
	unsigned int un;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	un = n;

	if (un / 10)
	{
		print_number(un / 10);
	}

	_putchar((un % 10) + '0');
}
