#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * if - Code runs when condition is TRUE
 *
 * else - Code runs when condition is FALSE
 *
 * putchar - Write a character, of unsigned
 * char type, to standard output
 *
 * Description - Print all possible different
 * combinations of two digits.
 * Numbers must be separted by ',', follwed by space
 * The two digits must be different
 * 01 and 10 are considered same combo of 0 and 1
 * Numbers should be printed in ascending order
 * You can only use putchar functon
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n, n2;

	for (n = 48; n < 58; n++)
	{
		for (n2 = 48; n2 < 58; n2++)
		{
			if (n < n2)
			{
				putchar(n);
				putchar(n2);
				if (n != 56 || n2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
