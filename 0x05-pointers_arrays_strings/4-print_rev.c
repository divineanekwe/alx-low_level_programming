#include "main.h"

/**
  * print_rev - prints a string, in reverse,
  * folllowed by a new line
  * @s: String to be printed
  *
  * Return: void (nothing)
  */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
