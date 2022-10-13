#include "variadic_functions.h"

/**
  * sum_them_all - finds the sum of all its parameters
  * @n: One fixed argument
  *
  * Return: Sum of all the parameters.
  * Otherwise, return 0 if @n == 0
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
