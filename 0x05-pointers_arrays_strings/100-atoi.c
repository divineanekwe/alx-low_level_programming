#include "main.h"

/**
  * _atoi - converts a string into an integer
  * @s: String to be converted
  *
  * Return: Integer
  */
int _atoi(char *s)
{
	int i = 1;
	int valid = 0;
	int neg = 1;
	unsigned int m10a = 0;
	int j, m10;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if ((s[j] > 47) && (s[j] < 58))
		{
			m10a *= 10;
			m10a += (s[j] - '0');
			valid = 1;
		} else if (s[j] == 45)
		{
			neg *= -1;
		} else if (valid == 1)
		{
			break;
		}
	}
	m10 = m10a * neg;
	return (m10);
}
