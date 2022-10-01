#include "main.h"

/**
  * main - prints the minimum number of coins
  * to make change for an amount of money
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Description - coins can have value as
  * 25, 10, 5, 2, and 1 cent
  * If number passed as the argument is
  * negative, print 0
  *
  * Return: 0 on success.
  * Otherwise, return 1 if number of arguments
  * passed to main is not exactly 1, print Error
  */
int main(int argc, char **argv)
{
	int i, n, count;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if ((argv[1][i] < 48 || argv[1][i] > 57) && argv[1][i] != '-')
		{
			printf("Error\n");
			return (1);
		}
	}
	if (*argv[1] == '-')
	{
		printf("0\n");
	} else
	{
		n = atoi(argv[1]);
		count = 0;
		for (i = 0; i < 5; i++)
		{
			while (n - cents[i] >= 0)
			{
				count++;
				n -= cents[i];
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
