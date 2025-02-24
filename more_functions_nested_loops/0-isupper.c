#include "main.h"
/**
 * _isupper - check for uppercase alphabet
 * @c: int c
 *
 *
 * Return: 1 otherwise 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

