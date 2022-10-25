#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning
  * of a listint_t list
  * @head: Pointer to the lisint_t list
  * @n: Integer in the list @head
  *
  * Return: The address of the new element.
  * Otherwise, return NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
