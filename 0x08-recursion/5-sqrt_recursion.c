#include "main.h"

/**
  * _sqrt_recursion - returns the natural
  * square root of a number
  * @n: Number to find the square root
  *
  * Return: The natural square root of @n,
  * -1 if @n does not have a natural square root
  */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);

	return (main_sqrt(n, i));
}

/**
  * main_sqrt - finds the natrual square
  * root of a number using recursion
  * @n: Number to find the square root
  * @i: Possible square root iterator
  *
  * Return: The natural square root of @n,
  * -1 if @n does not have a natural square root
  */
int main_sqrt(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) > n)
		return (-1);

	return (main_sqrt(n, (i + 1)));
}
