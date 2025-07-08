#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, initializes to zero
 * @nmemb: number of elements in the array
 * @size:  size of each element
 *
 * Return: Pointer to the allocated, zeroed memory.
 *         If nmemb or size is 0, or allocation fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	if (total / size != nmemb)
	{
		return (NULL);
	}

	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (ptr);
}
