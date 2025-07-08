#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers from min to max inclusive
 * @min: Starting value of the sequence
 * @max: Ending value of the sequence
 *
 * Return: Pointer to newly allocated array containing values
 *         min, min+1, ..., max
 *         Returns NULL if min > max or memory allocation fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	unsigned int count, i;

	if (min > max)
	{
		return (NULL);
	}

	count = (unsigned int)(max - min + 1);
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count; i++)
		arr[i] = min + (int)i;

	return (arr);
}
