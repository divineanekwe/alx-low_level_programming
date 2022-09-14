#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: Number to checked
 *
 * Return:  Always return 1 if @n is greater than zero,
 * or return 0 if @n is zero,
 * or return -1 if @n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
}
