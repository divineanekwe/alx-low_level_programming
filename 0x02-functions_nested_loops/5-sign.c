#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: Number to checked
 *
 * Description - Prints '+' if @n is greater than zero,
 * prints '0' if @n is zero,
 * prints '-' if @n is less than zero
 *
 * Return:  Always return 1 if @n is greater than zero,
 * or return 0 if @n is zero,
 * or return -1 if @n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
