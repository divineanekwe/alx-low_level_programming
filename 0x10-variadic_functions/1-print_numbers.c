#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: Number separator
  * @n: Number of integers passed to the function
  *
  * Description - if @separator is NULL, don't print it
  *
  * Return: void (nothing)
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", va_arg(ap, int));
		} else
		{
			if (separator == NULL)
			{
				printf("%d", va_arg(ap, int));
			} else
			{
				printf("%d%s", va_arg(ap, int), separator);
			}
		}
	}
}
