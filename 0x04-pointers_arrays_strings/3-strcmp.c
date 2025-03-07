#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: char *s1
 * @s2: char *s2
 *
 *
 *
 * Return: 0 if equal, positive or negative number if there is a diff.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
