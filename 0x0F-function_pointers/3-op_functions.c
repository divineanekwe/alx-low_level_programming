#include "3-calc.h"

/**
  * op_add - finds the addition of two numbers
  * @a: First integer
  * @b: Second integer
  *
  * Return: The sum of @a and @b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - finds the difference between two integers
  * @a: First integer
  * @b: Second integer
  *
  * Return: The difference of @a and @b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - finds the product of two integers
  * @a: First integer
  * @b: Second integer
  *
  * Return: The product of @a and @b
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - finds the division of two integers
  * @a: Dividend
  * @b: Divisor
  *
  * Return: The integer result of @a / @b
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - finds the remainder of the division of two integers
  * @a: Dividend
  * @b: Divisor
  *
  * Return: The remainder of @a / @b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
