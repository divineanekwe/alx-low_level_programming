#include "main.h"

/**
  * _strcpy - copies the string @src to the
  * buffer pointed to by @dest
  * @dest: Destination for resulting string
  * @src: Source of string to be copied
  *
  * Description - man strcpy
  *
  * Return: A pointer to the string @dest
  */
char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*s = *src;
		s++;
		src++;
	}
	*s = '\0';
	return (dest);
}
