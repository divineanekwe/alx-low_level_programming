#include "main.h"

/**
  * _strstr - locates a substring
  * @haystack: String to be checked
  * @needle: Substring to search for
  *
  * Return: A pointer to the beginning
  * of the located substring, or NULL
  * if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (*(needle + j) == '\0')
	{
		return (haystack);
	}

	while (*(haystack + i) != '\0')
	{
		for ( ; *(needle + j) == *(haystack + i); j++)
		{
			if (*(needle + j + 1) == '\0')
			{
				return (haystack + i - j);
			}
			i++;
		}
		i++;
	}

	return ('\0');
}
