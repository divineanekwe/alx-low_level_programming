#include "main.h"

/**
  * _isdigit - checks if a character @c is a digit
  * @c: The character to be checked
  *
  * Return: 1 if character @c is a digit.
  * Otherwise, return 0
  */
int _isdigit(int c)
{
	if (c >= 48 & c < 58)
		return (1);
	return (0);
}
