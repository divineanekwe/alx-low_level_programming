#include "main.h"

/**
  * _memcpy - copies memory area
  * @src: Source memory to copy
  * @dest: Destination memory to copy to
  * @n: Number of bytes to copy from @src
  *
  * Return: A pointer to memory @dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
