#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * while - Code will run until condition if false
 *
 * printf - Display result to standard output
 *
 * Description - Print all single digit numbers of
 * base 10 starting from 0, followed by a new line
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
