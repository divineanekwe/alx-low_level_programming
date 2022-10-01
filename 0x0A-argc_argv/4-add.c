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
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(*(argv + i) + j) != '\0'; j++)
		{
			if (*(*(argv + i) + j) < 48 || *(*(argv + i) + j) > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
