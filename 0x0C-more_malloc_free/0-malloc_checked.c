#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @b: Number of bytes to allocate
  *
  * Return: A pointer to the allocated memory.
  * Otherwise, return status value 98, if _malloc faild
  */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
