#include "main.h"
/**
 * islower - Checks for lowercase character
 * @check: validates if character is a
 * lowercasei
 *
 * Return: Return 1 if character is lowercase
 * otherwise returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
