#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			/* return pointer to the first  occurrence */
			return (&s[i]);
		}

	}

	if (c == '\0')
		/* return pointer to null terminator */
		return (&s[i]);

	return (NULL);
}
