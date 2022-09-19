#include "main.h"

/**
  * puts2 - Print every other character of a
  * string, starting with the first character,
  * followed by a new line
  * @str: String to be checked
  *
  * Return: void (nothing)
  */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
