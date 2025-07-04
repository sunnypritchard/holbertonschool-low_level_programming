#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination buffer
 * @src: source string
 * @n: number of bytes to copy
 *
 * Description: Copies at most n bytes from src to dest.
 * If src is less than n bytes long, the remainder of dest
 * is filled with '\0' characters. Otherwise, dest is not null-terminated.
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Pad dest with '\0' if src has fewer than n characters */
	for (; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
