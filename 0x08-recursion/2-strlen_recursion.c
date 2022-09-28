#include "main.h"

/**
  * _strlen_recursion - returns the length of a string
  * @s: String to check the length
  *
  * Return: Length of @s
  */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		s++;
		return (count + _strlen_recursion(s));
	}
	return (count);
}
