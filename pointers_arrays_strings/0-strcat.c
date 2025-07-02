#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string to append to dest.
 *
 * Description: This function appends the string pointed to by @src
 * to the end of the string pointed to by @dest. The terminating null byte
 * at the end of @dest is overwritten by the first character of @src,
 * and a new null byte is added at the end of the resulting string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* Find the end of the destination string */
	while (dest[i] != '\0')
	{
		i++;
	}
	/* Append characters from src to dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
