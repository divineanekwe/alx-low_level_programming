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

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle + j))
		{
			do {
				if (*(needle + j + 1) == '\0')
				{
					return (haystack + i - j);
				}
				i++;
				j++;
			} while (*(haystack + i) == *(needle + j));
		}
		i++;
	}

	return ('\0');
}