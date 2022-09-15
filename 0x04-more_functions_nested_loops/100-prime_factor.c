#include <stdio.h>
#include <math.h>

/**
  * main - find and print the largest prime
  * factor of the number 612852475143
  * lpf: largest prime factor
  *
  * Return: Always 0
  */
int main(void)
{
	long int i, n, lpf;

	n = 612852475143;

	while (n % 2 == 0)
	{
		n /= 2;
		lpf = 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
			lpf = i;
		}
	}
	if (n > 2)
	{
		lpf = n;
	}
	printf("%ld\n", lpf);
	return (0);
}
