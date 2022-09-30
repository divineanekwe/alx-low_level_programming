#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: String to check
  * @accept: Prefix for length check
  *
  * Return: Number of bytes in the initial segment
  * of @s which consist only of bytes from @accept
  */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int n = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				n++;
				break;
			} else if (*(accept + j + 1) == '\0')
			{
				return (n);
			}
		}
		i++;
	}
	return (n);
}
