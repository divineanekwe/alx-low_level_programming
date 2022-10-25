#include "lists.h"

/**
  * free_listint2 - frees a listint_t list
  * @head: Pointer to Pointer to the listint_t list
  *
  * Description - sets the head to NULL
  *
  * Return: Void (nothing)
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		while (*head)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
		*head = NULL;
	}
}
