#include "lists.h"

/**
  * pop_listint - deletes the head node of a
  * listint_t linked list
  *
  * Return: The head node's data (n).
  * Otherwise, return 0 if the linked list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
