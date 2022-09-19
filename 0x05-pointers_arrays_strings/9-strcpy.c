#include "main.h"
#include <stdio.h>

/**
  * _strcpy - copies the string to by src,
  * including the terminating null byte (\0),
  * to the buffer pointed to by dest
  * @dest: Destination of string to copy to
  * @src: Source of string to be copied
  *
  * Return: Pointer to @dest
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = *(src + j);
	}
	return (dest);
}
