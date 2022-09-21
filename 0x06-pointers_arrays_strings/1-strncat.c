#include "main.h"

/**
  * _strncat - concatenates two strings
  * @dest: Destination for resulting string
  * @src: Source string for use to append
  * @n: Number of bytes to be used from @src
  *
  * Description: similar to _strcat function,
  * except that it will use at most @n bytes
  * from @src; and @src does not need to be
  * null-terminated if it contains @n or more
  * bytes
  *
  * Return: A pointer to the resulting string @dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i = 0;

	while (dest[i] != '\0')
	{
		dlen++;
		i++;
	}

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[dlen + i] = src[i];
	dest[dlen + i] = '\0';

	return (dest);
}
