#include "main.h"

/**
  * _strcat - appends the @src string to the
  * @src: Source string for use to append
  * @dest: Destination for resulting string
  *
  * Description: Overwrites the terminating null
  * byte (\0) at the end of @dest, and then adds
  * a terminating null byte
  *
  * Return: A pointer to the resulting string @dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';

	return (dest);
}
