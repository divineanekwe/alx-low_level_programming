#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @n: Integer to be computed
  *
  * Return: The absolute value of @n
  */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-1 * n);
}
