#include "main.h"

/**
 * _islower - Checks if a character is a lowercase letter.
 * @c: The character to check.
 *
 * Description: This function takes an integer representing an ASCII character
 *              and returns 1 if the character is a lowercase letter (a-z),
 *              otherwise returns 0.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
