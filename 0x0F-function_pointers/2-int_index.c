#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: Array to search in
  * @size: Number of elements in the array @array
  * @cmp: Pointer to function to compare values
  *
  * Description - if @size <= 0, return -1
  *
  * Return: The index of the first element for which
  * the @cmp function does not return 0.
  * Otherwise, return -1 if no element matches
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
