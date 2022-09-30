#include "main.h"

/**
  * _strcat - appends string @src to string @dest
  * @src: Source string to append
  * @dest: Destination for resulting string
  *
  * Return: A pointer to the resulting string @dest
  */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*s != '\0')
	{
		s++;
	}

	while (*src != '\0')
	{
		*s = *src;
		s++;
		src++;
	}

	*s = '\0';
	return (dest);
}
