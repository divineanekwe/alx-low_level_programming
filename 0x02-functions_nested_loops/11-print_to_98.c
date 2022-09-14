#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Print all numbers from @n to 98
 * @n: Start point of the numbers to be printed
 */
void print_to_98(int n)
{
	int a, b;

	if (n <= 98)
	{
		for (a = n; a <= 98; a++)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else
			{
				printf("%d\n", a);
			}
		}
	}
	else
	{
		for (b = n; b >= 98; b--)
		{
			if (b != 98)
			{
				printf("%d, ", b);
			}
			else
			{
				printf("%d\n", b);
			}
		}
	}
}
