#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to check.
 *
 * Description: This function takes an integer `c` representing
 *              a character's ASCII value and checks if it is an 
 *              uppercase letter (A-Z). It returns 1 if true, 
 *              otherwise, it returns 0.
 *
 * Return: 1 if `c` is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

