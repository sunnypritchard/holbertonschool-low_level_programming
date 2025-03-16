#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct dog - define type struct dog with three fields (name, owner, and age)
 * @name: char* dog name
 * @owner: char* dog owner
 * @age: int* dog age
 *
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
