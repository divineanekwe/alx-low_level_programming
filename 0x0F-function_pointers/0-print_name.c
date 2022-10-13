#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: Name to print
  * @f: Pointer to (name print) function
  *
  * Return: void (nothing)
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
