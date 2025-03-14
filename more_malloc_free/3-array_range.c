#include <stdlib.h>
#include "main.h"

/**
  *array_range - creates an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: pointer to newly created array.
  *NULL if malloc fails.
  *NULL if min > max.
  */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	/* Get array size */
	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	/* Fill array with value, star min to max */
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);

}
