#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: Pointer to first string
  * @s2: Pointer to second string
  *
  * Return: 0 if strings are equal,
  * greater than zero if s1 > s2
  * less than zero if s1 < s2
  */
int _strcmp(char *s1, char *s2)
{
	char *p1 = s1;
	char *p2 = s2;
	char c1, c2;

	do {
		c1 = *p1++;
		c2 = *p2++;
		if (c1 == '\0')
		{
			return (c1 - c2);
		}
	} while (c1 == c2);

	return (c1 - c2);
}
