#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list
  * @h: Pointer to the list_t list
  *
  * Description - if str is NULL, print [0] (nil)
  *
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		++count;
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		} else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
	}
	return (count);
}
