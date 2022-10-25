#include "lists.h"

/**
  * free_listint - frees a listint_t list
  *
  * Return: Void (nothing)
  */
void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
