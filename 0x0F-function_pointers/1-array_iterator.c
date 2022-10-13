#include "function_pointers.h"

/**
  * array_iterator - executes a function given
  * as a parameter on each element of an array
  * @array: Array to execute function on
  * @size: Size of the array
  * @action: Pointer to the function to use
  *
  * Return: void (nothing)
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
