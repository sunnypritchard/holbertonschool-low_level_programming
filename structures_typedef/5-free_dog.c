#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t struct
 * @d: Pointer to the dog_t struct to be freed
 *
 * Description: Frees the memory allocated for the name,
 * owner, and the struct itself. Does nothing if @d is NULL.
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
