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
 * combinations of three digits
 * Numbers must be separated by ',', followed by space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are same digits of 0, 1, 2
 * Print only the smallest combination of three digits
 * You can only use putchar function
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n, n2, n3;

	for (n = 48; n < 58; n++)
	{
		for (n2 = 48; n2 < 58; n2++)
		{
			for (n3 = 48; n3 < 58; n3++)
			{
				if (n < n2 && n2 < n3)
				{
					putchar(n);
					putchar(n2);
					putchar(n3);
					if (n != 55 || n2 != 56 || n3 != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
