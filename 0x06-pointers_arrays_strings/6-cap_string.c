#include "main.h"

/**
  * cap_string - capitalizes all words of a string
  * @s: String to capitalize
  *
  * Description - Separators of words: space,
  * tabulation, new line, ',', ';', '.', '!',
  * '?', '"', '(', ')', '{', '}'
  *
  * Return: A pointer to @s
  */
char *cap_string(char *s)
{
	int i = 0;
	char c;

	while (*(s + i) != '\0')
	{
		c = *(s + i);
		/* 9 is horinzontal tab (TAB) and 11 is vertical tab (VT) */
		if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
			c == '.' || c == '!' || c == '?' || c == '"' ||
			c == '(' || c == ')' || c == '{' || c == '}')
		{
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
			{
				*(s + i + 1) -= 32;
			}
		}
		i++;
	}
	return (s);
}
