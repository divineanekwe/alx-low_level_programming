#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * for - Code runs repeatedly until
 * condition is FALSE
 *
 * putchar - Write a character, of unsigned
 * char type, to standard output
 *
 * Description - Print all the numbers of
 * base 16 in lowercase, followed by a
 * new line. You can only use putchar
 * function
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n;
	int c;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
