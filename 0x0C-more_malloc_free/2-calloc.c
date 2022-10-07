#include "main.h"

/**
 * _memset - filles memory with constant byte
 * @s: String pointer to fill
 * @b: Constant byte to fill @s with
 * @n: Number of bytes of memory to fill in
 * first area of @s
 *
 * Return: void (nothing)
 */
void _memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
}

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
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(size * nmemb);
	if (m == NULL)
		return (NULL);
	_memset(m, 0, size * nmemb);
	return (m);
}
