#include "3-calc.h"

/**
  * get_op_func - selects the correct function to perform
  * the operation asked by the user.
  *
  * Return: Pointer to the correct function
  *
  */
int (*get_op_func(char *s))(int, int)
{
	op_t opts[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (opts[i].op)
	{
		if(strcmp(opts[i].op, s) == 0)
			return (opts[i].f);
		i++;
	}
	return (NULL);
}
