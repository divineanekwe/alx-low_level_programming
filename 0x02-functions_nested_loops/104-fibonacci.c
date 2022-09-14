#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * Description - Find and print the first
 * 98 Fibonacci numbers, starting with 1
 * and 2, followed by a new line
 * The numbers should be separated by comma,
 * followed by a space
 * You are allowed to use the standard library
 * you are not allowed to use any other library
 * You are not allowed to use long long, malloc,
 * pointers, arrays/tables, or structures
 * You are not allowed to hard code any Fibonacci
 * number (except for 1 and 2)
 *
 * Return: Alwyas return 0 (success)
 */
int main(void)
{
	unsigned long int i, a, a1, a2, b, b1, b2;

	a = 1;
	b = 2;

	printf("%lu", a);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", b);
		b += a;
		a = b - a;
	}

	a1 = a / 1000000000;
	a2 = a % 1000000000;
	b1 = b / 1000000000;
	b2 = b % 1000000000;

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", b1 + (b2 / 1000000000));
		printf("%lu", b2 % 1000000000);
		b1 += a1;
		a1 = b1 - a1;
		b2 += a2;
		a2 = b2 - a2;
	}

	printf("\n");
	return (0);
}
