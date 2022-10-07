#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Description - the memory is set to zero
 *
 * Return: A pointer to the allocated memory.
 * If @nmemb or @size is 0, return NULL.
 * Otherwise, return NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *m = malloc(nmemb * size);

	if (!m || nmemb < 1 || size < 1)
		return (NULL);
	for (i = 0; i < size; ++i)
		m[i] = 0;
	return (m);
}
