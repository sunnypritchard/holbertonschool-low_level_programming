#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct dog - define type struct dog with three fields (name, owner, and age)
 * @name: char* dog name
 * @owner: char* dog owner
 * @age: int* dog age
 *
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
