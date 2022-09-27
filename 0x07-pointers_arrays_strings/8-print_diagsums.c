#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - prints the sum of the two
  * diagonals of a square matrix of integers
  * @a: Pointer to matrix
  * @size: Size of matrix
  *
  * Return: void (nothing)
  */
void print_diagsums(int *a, int size)
{
	int rsum = 0;
	int lsum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		rsum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0 ; i < size; i++)
	{
		lsum += a[i];
		a -= size;
	}
	printf("%d, %d\n", rsum, lsum);
}
