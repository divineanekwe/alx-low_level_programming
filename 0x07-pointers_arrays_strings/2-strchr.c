#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: String for character search
  * @c: Character to locate in @s
  *
  * Return: A pointer to the first occurrence
  * of the character @c, or NULL if @c is not
  * found
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) >= '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
