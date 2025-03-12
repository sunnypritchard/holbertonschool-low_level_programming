#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - Duplicate a string using malloc
 * @str: string to duplicate
 *
 * Return: pointer to new duplicated string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *ptr_str;
	int i, length;

	length = 0;

	/* Check for NULL Input */
	if (str == NULL)
		return (NULL);

	/* Calculate the lenght */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Allocate memory */
	ptr_str = malloc((length + 1) * sizeof(char));
	if (ptr_str == NULL)
		return (NULL);

	/* Copy string */
	for (i = 0; i < length; i++)
		ptr_str[i] = str[i];
	ptr_str[length] = '\0';

	return (ptr_str);
}
