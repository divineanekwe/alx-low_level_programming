#include "main.h"

/**
  * rev_string - reverses a string
  * @s: String to be reversed
  *
  * Return: void (nothing)
  */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int l;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i / 2;
	i = i - 1;
	while (i >= l)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
}
