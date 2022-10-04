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
	char *s;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	s = (char *)malloc(i + j + 1);
	if (s == NULL)
		return ('\0');
	if ((*s1 == '\0' && *s2 == '\0') || (s1 == 0x00 && s2 == 0x00))
	{
		*s = '\0';
	} else if (*s1 == '\0' || s1 == 0x00)
	{
		for (i = 0; s2[i] != '\0'; i++)
			s[i] = s2[i];
		s[i] = '\0';
	} else if (*s2 == '\0' || s2 == 0x00)
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		s[i] = '\0';
	} else
	{
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++)
		{
			s[i] = s2[j];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}
