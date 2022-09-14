#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * Description - Compute and Print the sum
 * of all the multiples of 3 or 5 below
 * 1024 (excluded), followed by a new line
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	unsigned long int sum, sum_3, sum_5;
	int i;

	sum = 0;
	sum_3 = 0;
	sum_5 = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum_3 += i;
		} else if ((i % 5) == 0)
		{
			sum_5 += i;
		}
	}
	sum = sum_3 + sum_5;
	printf("%lu\n", sum);
	return (0);
}
