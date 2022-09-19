#include "main.h"

/**
  * _puts - prints a string, followed by
  * a new line to stdout
  * @str: String to print
  *
  * Return: void (nothing)
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
