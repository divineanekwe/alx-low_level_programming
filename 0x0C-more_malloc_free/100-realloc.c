#include "main.h"

/**
 * _realloc - reallocates a memory block
 * using malloc and free
 * @ptr: Pointer to previous malloc allocation
 * @old_size: Size in bytes of space for @ptr
 * @new_size: New size in bytes of new memory block
 *
 * Return: A pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr, *optr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	nptr = malloc(new_size);
	if (!nptr)
	{
		return (NULL);
	}
	optr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			nptr[i] = optr[i];
		}
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			nptr[i] = optr[i];
		}
	}
	free(ptr);
	return (nptr);
}
