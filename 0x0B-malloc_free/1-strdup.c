#include "main.h"

/**
  * _strdup - returns a pointer to a new space
  * memory which contains a copy of a string
  * @str: String to be copied
  *
  * Description: man strdup
  *
  * Return: A pointer to the new duplicate string.
  * Otherwise, return NULL if insufficient memory
  * was availabe or @str = NULL
  */
char *_strdup(char *str)
{
	int i, j;
	char *s;

	if (str == 0x00)
		return ('\0');
	i = 0;
	while (str[i] != '\0')
		i++;
	s = (char *)malloc(i);
	if (s == NULL)
		return ('\0');
	for (j = 0; j < i; j++)
		s[j] = str[j];
	s[j] = '\0';
	return (s);
}
