#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * putchar - Write a character, of unsigned
 * char type, to standard output
 *
 * Description - Print all possible combinations
 * of single-digit numbers.
 * Numbers must be separted by ',', followed by space
 * Numbers should be print in ascending order
 * You can only use the putchar function
 * You are not allowed to use any variable of type 'char'
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
