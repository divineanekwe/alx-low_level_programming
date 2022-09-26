#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: String pointer to fill
  * @b: Constant byte to fill @s with
  * @n: Number of bytes of memory to fill in
  * first area of @s
  *
  * Return: A pointer to memory area, @s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b;
	}
	return (s);
}
