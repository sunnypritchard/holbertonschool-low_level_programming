#include <stdlib.h>
#include "main.h"

/**
  * _calloc - allocates memory of an array using malloc.
  * @nmemb: number of elements in array.
  * @size: size of elements of array.
  *
  * Return: NULL is size or nmemb == 0.
  * NULL if malloc fails.
  * Pointer to memory allocated if successful.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	/* Handle fail inputs*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Allocate memory and initialize it */
	arr = calloc(nmemb, size);
	if (arr == NULL)
	{
		return (NULL);
	}

	return (arr);
}
