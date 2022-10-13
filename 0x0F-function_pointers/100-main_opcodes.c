#include <stdio.h>
#include <stdlib.h>

/**
  * main - print the opcodes of it's own main function
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Description - if the number of argument is not
  * the ocrrect one, print Error, exit with status 1.
  * If the number of bytes is negative, print Error,
  * exit with status 2
  *
  * Return: Always 0, otherwise something else
  */
int main(int argc, char **argv)
{
	int i, bytes;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", ptr[i]);
			break;
		}
		printf("%02hhx ", ptr[i]);
	}
	return (0);
}
