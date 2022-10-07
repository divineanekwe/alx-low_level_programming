#include "main.h"

/**
  * string_nconcat - concatenates two strings
  * @s1: First string
  * @s2: Second string
  * @n: First number of bytes of @s2 to add
  *
  * Description - store resulting string newly
  * allocated space in memory.
  * Use entire @s2, if n >= length of @s2
  * If NULL is passed, treat it as empty string
  *
  * Return: A pointer to newly allocated string.
  * Otherwise, return NULL if function fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l1 = 0, l2 = 0;
	char *s;

	while (s1 != 0x00 && s1[l1] != '\0')
	{
		++l1;
	}
	while (s2 != 0x00 && s2[l2] != '\0')
	{
		++l2;
	}
	if (n < l2)
	{
		s = malloc(sizeof(*s) * (l1 + n + 1));
	} else
	{
		s = malloc(sizeof(*s) * (l1 + l2 + 1));
	}
	if (s == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < l1; ++i)
	{
		s[i] = s1[i];
	}
	for (j = 0; n < l2 && i < (l1 + n); ++j)
	{
		s[i++] = s2[j];
	}
	for (j = 0; n >= l2 && i < (l1 + l2); ++j)
	{
		s[i++] = s2[j];
	}
	s[i] = '\0';
	return (s);
}
