#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @s: String to be encoded
  *
  * Return: A pointer to @s
  */
char *rot13(char *s)
{
	int i = 0;
	char a[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char c[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == *(a + j))
			{
				*(s + i) = *(c + j);
				break;
			}
		}
		i++;
	}

	return (s);
}
