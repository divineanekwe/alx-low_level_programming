#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * for - code will run repeatedly until
 * condition is FALSE
 *
 * putchar - Write a character, of unsigned
 * char type, to standard ouput
 *
 * Description - Print all single digit numbers
 * of base 10 starting from 0, followed by a new
 * line. You can only use the putchar function
 *
 * Return: Always return 0 (success);
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
