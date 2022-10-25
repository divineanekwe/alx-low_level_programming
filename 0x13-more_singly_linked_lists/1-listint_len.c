#include "lists.h"

/**
  * listint_len - finds the number of elements
  * in a linked listint_t list
  * @h: Pointer to the listint_t list
  *
  * Return: Number of elements in the list @h
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		++count;
		h = h->next;
	}
	return (count);
}
