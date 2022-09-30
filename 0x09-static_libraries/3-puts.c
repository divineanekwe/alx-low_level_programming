#include "main.h"

/**
  * _puts - prints a string @s to stdout
  * @s: String to print
  *
  * Return: Void (nothing)
  */
void _puts(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts(s + 1);
	} else
	{
		_putchar('\n');
	}
}
