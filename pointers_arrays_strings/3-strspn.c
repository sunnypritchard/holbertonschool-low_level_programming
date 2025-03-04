#include "main.h"

/**
 * _strspn - gets lenght of prex substring
 * @s:  pointer to string
 * @accept: substring
 *
 *
 *
 * Return: n bytes in intial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s)
	{
		char *a = accept;
		int found = 0;

		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
