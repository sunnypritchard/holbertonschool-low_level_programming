#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: int c
 *
 *
 * Return: 1 otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

