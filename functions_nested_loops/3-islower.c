#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check (as an ASCII value)
 *
 * Description: Loops through lowercase alphabet characters to check
 * if the input character matches any of them. Returns 1 if it is
 * lowercase, otherwise returns 0.
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise
 */

int _islower(int c)
{
	char lowercase_letter;

	for (lowercase_letter = 'a'; lowercase_letter <= 'z'; lowercase_letter++)
	{
		if (c == lowercase_letter)
			return (1);
	}
	return (0);
}
