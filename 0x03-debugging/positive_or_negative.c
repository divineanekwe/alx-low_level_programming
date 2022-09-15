#include <stdio.h>

/**
  * positive_or_negative - Check if i is positive, negative, or zero
  * @i: Number to be checked
  *
  * Return: void (nothing)
  */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
