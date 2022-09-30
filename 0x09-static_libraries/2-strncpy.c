#include "main.h"

/**
  * _strncpy - copies string exactly like strncpy
  * @dest: Destination of resulting string
  * @src: Source string to copy
  * @n: Number of bytes to use from @src
  *
  * Description - man strncpy
  *
  * Return: A pointer to string @dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (*(src + i) != '\0'); i++)
		*(dest + i) = *(src + i);
	for ( ; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
