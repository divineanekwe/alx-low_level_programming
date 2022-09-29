#include "main.h"

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: String to check
  *
  * Return: 1 if @s is a palindrome, otherwise return 0
  */
int is_palindrome(char *s)
{
	int slen = _strlen(s);
	int i = 0;

	if (*s == '\0')
		return (1);

	return (palindrome(s, i, slen));
}

/**
  * _strlen - returns the length of a string
  * @s: String to get the length
  *
  * Return: Length of @s
  */
int _strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen(s + 1));
	}
	return (0);
}

/**
  * palindrome - recursion to check if a
  * string is a palindrome
  * @s: String to check
  * @i: Iterator for character address
  * @slen: Length of @s
  *
  * Return: 1 if @s is a palindrome, otherwise return 0
  */
int palindrome(char *s, int i, int slen)
{
	if (i >= slen)
		return (1);
	else if (*(s + i) != *(s + slen - 1))
		return (0);

	return (palindrome(s, (i + 1), (slen - 1)));
}
