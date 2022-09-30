#include "main.h"

/**
  * _islower - checks if @c is lowercase
  * @c: The character to check
  *
  * Return: 1 if @c is uppercase.
  * Otherwise, return 0
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
