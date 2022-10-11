#include "dog.h"

/**
  * new_dog - creates a new dog
  * @name: Pointer to dog's name
  * @age: Age of dog
  * @owner: Pointer to dog's owner
  *
  * Return: A pointer to new_dog.
  * Otherwise, return NULL if the function fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen;
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	nlen = _strlen(name);
	olen = _strlen(owner);
	new->name = malloc(sizeof(char) * (nlen + 1));
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (olen + 1));
	if (new->owner == NULL)
	{
		free(new);
		free(new->name);
		return (NULL);
	}
	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	new->age = age;
	return (new);
}

/**
  * _strlen - returns the length of a string
  * @s: String to get the length
  *
  * Return: Length of string @s
  */
int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}

/**
  * _strcpy - copies the string @src to the
  * buffer pointer to by @dest
  * @dest: Destination for resulting string
  * @src: Source of string to be copied
  *
  * Return: A pointer to the string @dest
  */
char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*s = *src;
		++s;
		++src;
	}
	*s = '\0';
	return (dest);
}
