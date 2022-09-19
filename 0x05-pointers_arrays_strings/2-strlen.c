#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: String to be checked
  *
  * Return: Length of @s
  */
int _strlen(char *s)
{
	unsigned int length = 0;

	while(*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
