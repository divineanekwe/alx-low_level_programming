#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program starts with entry point
 *
 * rand - Generate the pseudo random number
 *
 * srand - Initialize the generated pseudo
 * random number by rand() function
 *
 * Description - Assign a random number to the variable
 * 'n' each time it is executed. Print whether the number
 * stored in the variable 'n' is positive or negative
 *
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
