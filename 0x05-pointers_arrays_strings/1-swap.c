#include "main.h"

/**
  * swap_int - swaps the values of two integers
  * @a: Pointer to first integer
  * @b: Pointer to second integer
  *
  * Return: void (nothing)
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
