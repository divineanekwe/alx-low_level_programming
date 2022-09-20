#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - generates random valid passwords for
  * the program 101-crackme
  *
  * Return: Always 0
  */
int main(void)
{
	int i, n;
	int max, upper, lower;
	char c;

	i = 0;
	max = 2772;
	lower = 32;
	upper = 126;
	while ((max - i) > 0)
	{
		srand(time(0) + i);
		n = (rand() % (upper - lower + 1)) + lower;
		if ((i + n) <= max)
		{
			c = n;
			printf("%c", c);
			i += n;
		}
		else
		{
			break;
		}
	}
	if ((max - i) > 0)
	{
		n = max - i;
		c = n;
		printf("%c", c);
	}
	return (0);
}
