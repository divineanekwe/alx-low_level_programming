#ifndef DOG_H
#define DOG_H

#include <stdio.h>
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
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);

#endif /* DOG_H */
