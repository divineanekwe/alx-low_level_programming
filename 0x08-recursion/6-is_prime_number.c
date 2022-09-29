#include "main.h"

/**
  * is_prime_number - returns 1 if the input
  * integer is a prime number, othewise 0
  * @n: Input integer
  *
  * Return: 1 if @n is a prime number,
  * otherwise 0
  */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	return (is_prime(n, i));
}

/**
  * is_prime - returns 1 if @n is a prime number
  * otherwise 0, using recursion
  * @n: Input integer
  * @i: Possible divisor iterator
  *
  * Return: 1 if @n is a prime number,
  * otherwise 0
  */
int is_prime(int n, int i)
{
	if (i == n)
		return (1);
	else if (i > n)
		return (0);
	else if ((n % i) == 0)
		return (0);

	return (is_prime(n, (i + 1)));
}
