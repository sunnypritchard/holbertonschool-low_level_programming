#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory and checks for failure
 * @b: number of bytes to allocate
 *
 * Return: Pointer to allocated memory
 * If malloc fails, program exits with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		/* if malloc fail, terminate prog with status 98 */
		exit(98);
	}

	return (ptr);
}

