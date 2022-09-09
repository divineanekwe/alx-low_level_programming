#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * putchar - Write a character, of unsigned
 * char type, to standard output
 *
 * Description - Print the alphabet in lowercase,
 * followed by a new line. You can only use the 
 * putchar function
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	char c;
	for(c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
