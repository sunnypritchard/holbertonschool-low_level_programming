#include "dog.h"

/**
 * free_dog - free memory block
 * @d: pointer to dog struct
 *
 *
 * Return: void (empty)
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}

}
