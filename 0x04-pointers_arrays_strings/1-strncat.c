#include "main.h"

/**
 * _strncat - concatenates two strings, using bytes from src.
 * @dest: char *dest
 * @src: char *src
 * @n: int n
 *
 *
 *
 * Return: ponter to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}

	while (n-- && *src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
