#include "main.h"

/**
  * _atoi - converts a string into a integer
  * @s: String to be converted
  *
  * Return: String @s as an integer
  */
int _atoi(char *s)
{
	int i = 1;
	int valid = 0;
	int neg = 1;
	unsigned int cur_val = 0;
	int j;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		if (*(s + j) >= 48 && *(s + j) < 58)
		{
			cur_val *= 10;
			cur_val += *(s + j) - '0';
			valid = 1;
		} else if (*(s + j) == 45)
		{
			neg *= -1;
		} else if (valid == 1)
		{
			break;
		}
	}

	cur_val *= neg;
	return (cur_val);
}
