#include "main.h"

/**
  * leet - encodes a string into 1337
  * @s: String to be encoded
  *
  * Description - replace 'a' and 'A' with 4,
  * replace 'e' and 'E' with 3,
  * replace 'o' and 'O' with 0,
  * replace 't' and 'T' with 7,
  * replace 'l' and 'L' with 1
  *
  * Return: A pointer to @s
  */
char *leet(char *s)
{
	char c[6] = "aeotl";
	char n[6] = "43071";
	int i = 0;
	int j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == *(c + j) || *(s + i) == (*(c + j) - 32))
			{
				*(s + i) = *(n + j);
			}
		}
		i++;
	}
	return (s);
}
