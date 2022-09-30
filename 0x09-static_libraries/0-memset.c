#include "main.h"

/**
  * _memset - fills memory with a constant byte
  * @s: String memory to be filled
  * @b: Constant byte to fill string @s with
  * @n: Number of first bytes of memory to fill in @s
  *
  * Return: A pointer to string memory area @s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		*(s + j) = b;
	return (s);
}
