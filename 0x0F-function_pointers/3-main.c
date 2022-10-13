#include "3-calc.h"

/**
  * main - performs arithemetic operations on two integers
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Return: Always 0, otherwise something else
  */
int main(int argc, char **argv)
{
	int n1, n2, result;
	int (*cal)(int, int);
	char s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	cal = get_op_func(argv[2]);
	if (!cal)
	{
		printf("Error\n");
		exit(99);
	}

	s = *argv[2];
	if ((s == '/' || s == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = cal(n1, n2);
	printf("%d\n", result);
	return (0);
}
