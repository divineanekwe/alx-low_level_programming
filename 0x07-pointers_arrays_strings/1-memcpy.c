#include "main.h"

/**
  * _memcpy - copies memory area
  * @src: Memory source to copy
  * @dest: Memory Destination to copy to
  * @n: Number of bytes to copy from @src
  *
  * Return: A pointer to @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
