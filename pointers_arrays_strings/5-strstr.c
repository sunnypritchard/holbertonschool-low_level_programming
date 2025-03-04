#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer  needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (; *h != '\0'; h++)
	{
		char *i = h;
		char *j = needle;

		while (*i != '\0' && *j != '\0' && *i == *j)
		{
			i++;
			j++;
		}

		if (*j == '\0')
		{
			return (h);
		}
	}
	return (NULL);
}
