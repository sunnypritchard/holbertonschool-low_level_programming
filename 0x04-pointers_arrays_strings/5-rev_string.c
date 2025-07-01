#include "main.h"

/**
 * rev_string - Reverses a string in place.
 * @s: The string to be reversed
 *
 * Description: This function takes a pointer to a string and reverses
 * the characters in place using a two-pointer approach.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
		;
	i--;
	for (j = 0; j < i; j++, i--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
