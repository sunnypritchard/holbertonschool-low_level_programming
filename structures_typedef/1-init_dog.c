#include "dog.h"


/**
 * init_dog - intitialize the fields of type struct dog
 * @d: pointer to type struct dog
 * @name: char* dog name
 * @owner: char* dog owner
 * @age: int* dog age
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
