#include "dog.h"

/**
  * init_dog - initializes a variable of type struct dog
  * @d: Pointer to definied variable
  * @name: Pointer to dog's name
  * @age: Age of dog
  * @owner: Pointer to dog's owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
