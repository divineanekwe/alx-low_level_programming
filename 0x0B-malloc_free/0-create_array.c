#include "main.h"

/**
  * create_array - creates an array of chars
  * @size: Size of the array
  * @c: Character to initialize the array to
  *
  * Return: A pointer to the array.
  * Otherwise, return NULL if @size equals 0
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s = (char *)malloc(size);

	if (size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
		s[i] = c;
	s[i] = '\0';
	return (s);
}
