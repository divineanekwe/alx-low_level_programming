#include "main.h"

/**
  * main - add positive numbers
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Description - if no number is passed
  * to the program, print 0
  *
  * Return: 0 on success.
  * Otherwise, return 1, and print Error
  */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		} else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
