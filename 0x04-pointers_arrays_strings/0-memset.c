#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory buffer to be fill
 * @b: the value to set each bytes to
 * @n: the number of bytes to fill
 *
 *
 *
 * Return: pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
