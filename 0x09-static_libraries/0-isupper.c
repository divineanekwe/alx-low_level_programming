#include "main.h"

/**
  * _isupper - checks if character @c is uppercase
  * @c: The character to check
  *
  * Return: 1 if character @c is uppercase.
  * Otherwise, return 0
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
