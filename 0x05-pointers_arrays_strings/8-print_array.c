#include "main.h"
#include <stdio.h>

/**
  * print_array - print n elements of an array of integers
  * @n: Number of elemnts of the array to be printed
  * @a: array to be printed
  *
  * Description - numbers must be separated by comma,
  * followed by space
  * Numbers should be displayed in the same order as they
  * are stored in the array
  *
  * Return: void (nothing)
  */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	} else
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			} else
			{
				printf("%d\n", a[i]);
			}
		}
	}
}
