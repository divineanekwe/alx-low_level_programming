#include "main.h"

/**
  * _strncpy - copies a string exactly like strncpy
  * @dest: Destination to copy string to
  * @src: Source of string to be copied
  * @n: Number of bytes of @src to copy
  *
  * Return: A pointer to @dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
