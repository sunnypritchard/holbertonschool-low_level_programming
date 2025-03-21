#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0-9).
 * @c: The character to check.
 *
 * Description: This function takes an integer `c`, which represents
 *              an ASCII character, and checks if it is a digit (0-9).
 *              It returns 1 if `c` is a digit, and 0 otherwise.
 *
 * Return: 1 if `c` is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

