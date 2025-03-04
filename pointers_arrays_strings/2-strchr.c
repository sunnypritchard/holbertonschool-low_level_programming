#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s:  pointer to string
 * @c:  character
 *
 *
 *
 * Return: pointer s or NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
