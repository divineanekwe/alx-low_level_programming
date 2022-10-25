#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end
  * of a listint_t list
  * @head: Pointer to Pointer to the listint_t list
  * @n: Integer in the new node
  *
  * Return: The address of the new element.
  * Otherwise, return NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node;
	return (node);
}
