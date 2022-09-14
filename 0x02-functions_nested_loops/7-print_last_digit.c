#include "main.h"
/**
 * print_last_digit - Print the last digit
 * of a number
 * @n: Number to be checked
 *
 * Return: Always return the value of the
 * last digit
 */
int print_last_digit(int n)
{
	int rem;

	if (n < 0)
		n = -1 * n;
	rem = n % 10;

	if (rem < 0)
		a = -1 * a;
	_putchar(a + '0');
	return (a);
}
