#include "main.h"

/**
  * _strncat - appends at most @n bytes of string
  * @src to string @dest
  * @src: Source string to append
  * @dest: Destination for resulting string
  * @n: Number of bytes to use from @src
  *
  * Description: @src doest not need to be null
  * terminated if it contains @n or more bytest
  *
  * Return: A pointer to the resulting string @dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dlen = 0;

	while (*(dest + i) != '\0')
	{
		dlen++;
		i++;
	}

	for (i = 0; (i < n) && (*(src + i) != '\0'); i++)
	{
		*(dest + dlen + i) = *(src + i);
	}

	*(dest + dlen + i) = '\0';
	return (dest);
}
