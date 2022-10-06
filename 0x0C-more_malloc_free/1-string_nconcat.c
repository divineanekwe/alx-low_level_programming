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
	unsigned int i = 0, j = 0;
	char *s;

	while (s1[i] != '\0')
		++i;
	while (s2[j] != '\0')
		++j;
	s = malloc(sizeof(*s) * (i + j + 1));
	if (s == NULL)
		return ('\0');
	for (i = 0; s1[i] != '\0'; ++i)
		s[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; ++j)
	{
		s[i] = s2[j];
		++i;
	}
	s[i] = '\0';
	return (s);
}
