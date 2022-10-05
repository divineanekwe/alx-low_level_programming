#include "main.h"

/**
  * argstostr - concatenates all the arguments
  * of your program
  * @ac: Argument count
  * @av: Argument vector
  *
  * Description - each argument should be followed
  * by a '\n' in the new string
  *
  * Return: A pointer to the new string.
  * Otherwise, return NULL if it fails.
  * Return NULL if ac == 0 or av == NULL
  */
char *argstostr(int ac, char **av)
{
	int i, j;
	int slen = 0;
	char *s, *sadd;

	if (ac < 1 || av == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(*(av + i) + j) != '\0')
		{
			slen++;
			j++;
		}
		slen++;
	}
	s = (char *)malloc((slen + 1) * sizeof(char));
	sadd = s;
	if (s == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*sadd = av[i][j];
			sadd++;
		}
		*sadd = '\n';
		sadd++;
	}
	*sadd = '\0';
	return (s);
}
