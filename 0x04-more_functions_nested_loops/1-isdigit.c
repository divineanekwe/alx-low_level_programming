#include "main.h"

/**
  * _isdigit - check for a digit (0 through 9)
  * @c: The integer to be checked
  *
  * Return: 1 if @c is a digit
  * 0 otherwise
  */
int _isdigit(int c)
{
	return ((c >= 48 && c < 58) ? 1 : 0);
}
