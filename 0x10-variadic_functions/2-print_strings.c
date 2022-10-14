#include "variadic_functions.h"

/**
  * print_strings - prints strings
  * @separator: Separates strings
  * @n: Number of strings passed to the function
  *
  * Description - if separator is NULL, dont print it.
  * If one of the string is NULL, print (nil) instead
  *
  * Return: void (nothing)
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arr;
	char *s;

	va_start(arr, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(arr, char *);
		if (!s)
		{
			s = "(nil)";
		}
		if (!separator)
		{
			printf("%s", s);
		} else if (i == 0)
		{
			printf("%s", s);
		} else
		{
			printf("%s%s", separator, s);
		}
	}
	va_end(arr);
	printf("\n");
}
