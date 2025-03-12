#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

 char *str_concat(char *s1, char *s2)
 {
	char *ptr_strcat;
	int i, len_s1, len_s2;

	len_s1 = 0;
	len_s2 = 0;
	
	/* Check for NULL input */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lenght */
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	/* Allocate memory */
	ptr_strcat = malloc(len_s1 + len_s2 + 1);
	if (ptr_strcat == NULL)
		return NULL;

	/* Concatenate str */
	for (i = 0; i < len_s1; i++)
		ptr_strcat[i] = s1[i];
	for (i = 0; i < len_s2; i++)
		ptr_strcat[len_s1 + i] = s2[i];

	ptr_strcat[len_s1 + len_s2] = '\0';

	return (ptr_strcat);

	
 }