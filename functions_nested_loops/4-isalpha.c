#include "main.h"

/**
 * _isalpha - check for alphabet
 * @c: int c
 *
 * Description: Check for alphabet:
 *
 * Check for alphabet letter, lowercase or uppercase.
 *
 * Return: 1 otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
