#include "lists.h"

/**
  * _strlen - finds the length of a string
  * @str: String to find the length
  *
  * Return: Length of the string @s
  */
int _strlen(const char *str)
{
	if (*str != '\0')
		return (1 + _strlen(str + 1));
	return (0);
}

/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: Beginning of the list_t list
  * @str: String to be duplicated in the new node
  *
  * Return: Pointer to the new element.
  * Othewise, return NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (!node)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = _strlen(str);
	node->next = NULL;
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
