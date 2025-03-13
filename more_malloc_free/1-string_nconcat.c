#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;
	unsigned int len1, len2;

	len1 = 0;
	len2 = 0;

	/* Handle Null Inputs */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* Determine the Lengths */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* Allocate Memory */
	if (n >= len2)
		ptr = malloc(len1 + len2 + 1);
	if (n < len2)
		ptr = malloc(len1 + n + 1);

	/* If malloc fail*/
	if (ptr == NULL)
		return (NULL);

	/* Concatenating Strings */
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];

	for (i = 0; i < (n < len2 ? n : len2); i++)
		ptr[len1 + i] = s2[i];

	ptr[len1 + i] = '\0';
	return (ptr);
}
