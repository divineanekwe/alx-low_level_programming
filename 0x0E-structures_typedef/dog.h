#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
  * struct dog - defines new type dog
  * @name: Pointer to dog's name
  * @age: Age of dog
  * @owner: Pointer to dog's owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
