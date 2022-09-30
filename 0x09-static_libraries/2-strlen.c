#include "main.h"

/**
  * _strlen - gets the length of a string
  * @s: String to be checked
  *
  * Return: Length of string @s
  */
int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}
