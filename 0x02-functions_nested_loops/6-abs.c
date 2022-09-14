#include "main.h"
/**
 * _abs - Compute the absolute value of
 * an integer
 * @n: Number to be checked
 *
 * Return: Always return the absolute
 * value of @n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
