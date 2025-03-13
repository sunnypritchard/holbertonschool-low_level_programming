#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - concatenate two strings using malloc
 * @b: 
 * 
 * Return: pointer to concat string
 */

 void *malloc_checked(unsigned int b)
 {
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
 }