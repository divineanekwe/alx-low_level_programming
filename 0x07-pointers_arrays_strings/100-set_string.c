#include "main.h"

/**
  * set_string - sets the value of a pointer to a char
  * @s: Pointer to be set
  * @to: Char to be set to pointer
  *
  * Return: void (nothing)
  */
void set_string(char **s, char *to)
{
	*s = to;
}
