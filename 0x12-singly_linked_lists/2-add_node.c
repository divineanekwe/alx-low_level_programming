#include "lists.h"

/**
  * _strlen - finds the length of a string
  * @s: String to find the length
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
  * add_node - adds a new node at the beginning
  * of a list_t list
  * @head: Beginning of the list_t list
  * @str: String to be duplicated in the new node
  *
  * Return: Pointer to the new element.
  * Otherwise, return NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup((char *)str);
	node->len = _strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
