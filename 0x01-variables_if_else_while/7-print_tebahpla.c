#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * for - Code will run repeatedly until
 * condition is FALSE
 *
 * putchar - Write a character, of unsigned
 * char type, to standard output
 *
 * Description - Print the lowercase alphabet
 * in reverse, followed by a new line.
 * You can only use the putchar function
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
