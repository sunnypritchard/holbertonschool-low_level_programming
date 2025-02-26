#include "main.h"

/**
 * rev_string - prints a string, in reverse
 * @s: char *s
 *
 *
 * Return: void (empty).
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;

	while (*end)
	{
		end++;
	}
	end--;/* move before null byte */

	while (start < end)
	{
		/* swap the characters */
		char temp = *start;

		*start = *end;
		*end = temp;
		/* move the pointers */
		start++;
		end--;
	}
}
