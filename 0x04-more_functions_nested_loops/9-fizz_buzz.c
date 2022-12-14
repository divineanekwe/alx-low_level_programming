#include <stdio.h>

/**
  * main - print the numbers from 1 to 100
  *
  * Description - For multiples of three,
  * print Fizz instead of the number and
  * for the multiples of five print Buzz
  * For multiples of 3 and 5, print FizzBuzz
  * Separate each number with a space
  *
  * Return: Always 0
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 1)
		{
			printf("%d", i);
		} else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0)
		{
			printf(" Buzz");
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
