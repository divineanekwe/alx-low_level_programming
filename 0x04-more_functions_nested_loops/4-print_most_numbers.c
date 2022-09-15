#include "main.h"

/**
  * print_most_numbers - print the numbers,
  * from 0 to 9, followed by a new line
  *
  * Description - Do not print 2 and 4
  * You can only use _putchar twice
  *
  * Return: void (nothing)
  */
void print_most_numbers(void)
{
	char c;

	for (c = 48; c < 58; c++)
	{
		if (c == 50 || c == 52)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
