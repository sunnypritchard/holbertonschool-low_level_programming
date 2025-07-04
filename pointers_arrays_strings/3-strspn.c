#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing characters to match
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, prefix_len = 0;
	int char_found;

	for (i = 0; s[i] != '\0'; i++)
	{
		char_found = 0;

		/* checks if s[i] exists in accept */
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				char_found = 1;
				break;
			}
		}
		if (!char_found)
		{
			break;
		}
		prefix_len++;
	}

	return (prefix_len);
}
