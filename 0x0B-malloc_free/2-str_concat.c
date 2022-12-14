#include "main.h"

/**
  * str_concat - concatenates two strings
  * @s1: First string to concatenate
  * @s2: Second string to concatenate
  *
  * Description - If NULL is passed, treat
  * it as empty string
  *
  * Return: A pointer to the new resulting string.
  * Otherwise, return NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int a;
	char *s;

	while (s1 != 0x00 && *s1 != '\0' && s1[i] != '\0')
	{
		i++;
	}
	while (s2 != 0x00 && *s2 != '\0' && s2[j] != '\0')
	{
		j++;
	}
	s = (char *)malloc((i + j + 1) * sizeof(char));
	if (s == NULL)
	{
		return ('\0');
	}
	for (a = 0; i != 0 && a < i; a++)
	{
		s[a] = s1[a];
	}
	for (a = 0; j != 0 && a < j; a++)
	{
		s[i] = s2[a];
		i++;
	}
	s[i] = '\0';
	return (s);
}
