#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * Description - Print the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed
 * by a new line
 * The numbers must be separated by comma,
 * followed by a space
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	long int i, a, b, c;

	a = 1;
	b = 2;

	for (i = 1; i <= 50; i++)
	{
		if (a != 20365011074)
		{
			printf("%ld, ", a);
		} else
		{
			printf("%ld\n", a);
		}
		c = a + b;
		a = b;
		b = c;
	}

	return (0);
}
