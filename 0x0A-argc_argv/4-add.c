#include "main.h"

/**
  * main - add positive numbers
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Description - if no number is passed
  * to the program, print 0.
  * If number contains symbols that are
  * not digits, print Error
  *
  * Return: 0 on success.
  * Otherwise, return 1
  */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (*(*(argv + i) + 0) >= 48 && *(*(argv + i) + 0) < 58)
			{
				sum += atoi(argv[i]);
			} else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
