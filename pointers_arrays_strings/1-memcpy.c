#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where the data will be copies to
 * @src: the source buffer from which data will copied
 * @n: n bytes
 *
 *
 *
 * Return: pointer dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
