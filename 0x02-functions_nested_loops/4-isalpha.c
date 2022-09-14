#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to be checked
 *
 * Return: Always return 1 if character is a
 * letter (lowercase or uppercase) otherwise
 * returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
