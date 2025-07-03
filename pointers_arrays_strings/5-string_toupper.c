#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to modify
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* check if the char is lowercase */
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* convert lowercase to uppercase by subtracting 32 */
			str[i] = str[i] - 32;
		}
	}

	return (str);
}
