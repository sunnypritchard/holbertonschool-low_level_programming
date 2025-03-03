#include "main.h"

/**
 * string_toupper - changes all lowercase to uppeercase
 * @str: a string
 *
 *
 *
 * Return: uppercase string.
 */
char *string_toupper(char *str)
{
	char *start = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (start);
}
