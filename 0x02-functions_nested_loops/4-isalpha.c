#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter.
 * @c: The character to check.
 *
 * Description: This function takes an integer representing an ASCII character
 *              and returns 1 if the character is a letter (either lowercase or uppercase),
 *              otherwise returns 0.
 *
 * Return: 1 if c is a letter, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
