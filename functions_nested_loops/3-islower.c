#include "main.h"
/**
 * _islower - check for lowercase char
 * @c: int c
 *
 * Description: Check for lowercase character:
 *
 * Checks for lowercase characters
 *
 * Return: 1 otherwise 0
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	return (0);
}
