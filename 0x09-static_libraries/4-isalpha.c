#include "main.h"

/**
  * _isalpha - checks if character @c is an alphabet
  * @c: The character to check
  *
  * Return: 1 if @c is an alphabet.
  * Otherwise, return 0
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
