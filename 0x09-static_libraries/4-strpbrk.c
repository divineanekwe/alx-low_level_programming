#include "main.h"

/**
  * _strpbrk - searches a string for any
  * of a set of bytes
  * @s: String to be searched
  * @accept: String to check for bytes
  *
  * Return: A pointer to the byte in @s that
  * matched one of the bytes in @accept.
  * Otherwise, return NULL if no such byte
  * is found
  */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				return (s + i);
			}
		}
		i++;
	}
	return ('\0');
}
