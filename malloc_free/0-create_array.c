#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 *
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if it fails or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	/* guard against zero-size alloc */
	if (size == 0)
	{
		return (NULL);
	}

	/* allocate memory for 'size' chars */
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
