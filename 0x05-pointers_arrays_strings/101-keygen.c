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
	int n = 20;
	int i = 0;
	int random = 0;

	srand(time(0));
	char numbers[] = "0123456789";
	char lAlphabets[] = "abcdefghijklmnopqrstuvwxyz";
	char uAlphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	char symbols[] = "!@#$^&*?";
	char password[n];

	random = rand() % 4;

	for (i = 0; i < n; i++)
	{
		if (random == 1)
		{
			password[i] = numbers[rand() % 10];
			random = rand() % 4;
			printf("%c", password[i]);
		} else if (random == 2)
		{
			password[i] = symbols[rand() % 8];
			random = rand() % 4;
			printf("%c", password[i]);
		} else if (random == 3)
		{
			password[i] = uAlphabets[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		} else
		{
			password[i] = lAphabets[rand() % 26];
			random = rand() % 4;
			printf("%c", password[i]);
		}
	}

	return (0);
}
