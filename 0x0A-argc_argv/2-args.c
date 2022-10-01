#include "main.h"

/**
  * main - prints all arguments it receives
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Description - print one argument per line
  *
  * Return: Always 0
  */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", *(argv + i));
	return (0);
}
