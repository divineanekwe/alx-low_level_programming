#include "variadic_functions.h"

/**
  * print_all - prints anything
  * @format: List of types of arguments
  * passed to the function
  *
  * Return: void (nothing)
  */
void print_all(const char * const format, ...)
{
	int i;
	char *s, *separator = "";
	va_list arr;

	va_start(arr, format);
	i = 0;
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arr, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arr, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arr, double));
					break;
				case 's':
					s = va_arg(arr, char *);
					if (!s)
					{
						s = "(nil)";
					}
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(arr);
}
