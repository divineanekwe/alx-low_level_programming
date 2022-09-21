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
	int dlen = 0;
	int slen = 0;
	int len = 0;
	char *dadd = dest;
	char *sadd = src;
	int i;

	while (*dest != '\0')
	{
		dest++;
		dlen++;
	}
	dest = dadd;
	while (*src != '\0')
	{
		src++;
		slen++;
	}
	src = sadd;
	len = dlen + slen;

	for (i = dlen; i <= (len + 1); i++)
	{
		if (i == (len + 1))
		{
			*(dadd + i) = '\0';
		} else
		{
			*(dadd + i) = *(sadd);
			sadd++;
		}
	}

	return (dest);
}
