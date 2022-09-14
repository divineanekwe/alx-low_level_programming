#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * Description - Find and Print the sum of
 * the even-valued tersms from the Fibonacci
 * sequence whose values do not exceed 4,000,000
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int a, b, c, sum;

	a = 1;
	b = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum += a;
		}
		c = a + b;
		a = b;
		b = c;
	}

	printf("%lu\n", sum);
	return (0);
}
