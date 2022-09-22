#include "main.h"

/**
  * reverse_array - reverses the content of
  * an array of integers
  * @a: Pointer to array of 1-D integers
  * @n: Size of array
  *
  * Return: void (nothing)
  */
void reverse_array(int *a, int n)
{
	int i, tmp;
	int *rev = a;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = *(rev + i);
		*(rev + i) = *(a + (n - i - 1));
		*(a + (n - i - 1)) = tmp;
	}
}
