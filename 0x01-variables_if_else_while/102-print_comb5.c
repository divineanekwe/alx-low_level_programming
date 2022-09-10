#include <stdio.h>
/**
 * main - Program starts with entry point
 *
 * for - Code runs repeatedly except condition is FALSE
 *
 * if - Code runs when condition is TRUE
 *
 * else - Code runs when condition is FALSE
 *
 * putchar - Write a character, of unsigned
 * char type, to standard output
 *
 * Description - Print all possible combinations of
 * two two-digit numbers.
 * Numbers should rnage from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits.
 * 1 should be printed as 01
 * Combination of numbers must be separated by ','
 * followed by a space
 * Combinations of numbers should be in asc order
 * 00 01 and 01 00 are considereed as same 0 and 1
 * You can only use the putchar function
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n, n2;

	for (n = 0; n < 100; n++)
	{
		for (n2 = 0; n2 < 100; n2++)
		{
			if (n < n2)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((n2 / 10) + 48);
				putchar((n2 % 10) + 48);
				if (n != 98 || n2 != 99)
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
