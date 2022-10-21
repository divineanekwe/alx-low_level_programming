#include "lists.h"

/**
  * free_list - frees a list_t list
  * @head: Pointer to the beginning of the list_t list
  *
  * Return: Void (nothing)
  */
void free_list(list_t *head)
{
	list_t *nodePtr;

	while (head)
	{
		nodePtr = head->next;
		free(head->str);
		free(head);
		head = nodePtr;
	}
}
