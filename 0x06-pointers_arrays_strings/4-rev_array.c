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
	int j = 0;
	int *rev = a;
	
	for (i = (n - 1); i > (n / 2); i--)
	{
		tmp = *(rev + j);
		*(rev + j) = *(a + i);
		*(a + i) = tmp;
		j++;
	}
}
