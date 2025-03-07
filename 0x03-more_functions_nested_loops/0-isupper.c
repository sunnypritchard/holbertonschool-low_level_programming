#include "main.h"
/**
 * _isupper - Checks for uppercase character
 * @c: int c
 *
 * Description: Print to stdout:
 *
 * Checks for uppercase character.
 * If so return `1` otherwise return `0`
 *
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
