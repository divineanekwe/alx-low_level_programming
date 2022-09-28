#include "main.h"

/**
  * factorial - returns the factorial of a
  * given number
  * @n: Number to use for factorial
  *
  * Description - Factorial of 0 is 1
  *
  * Return: Factorial of @n, or -1 to indicate
  * error if @n is lower than 0
  */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
