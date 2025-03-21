#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to check.
 *
 * Description: This function returns the absolute value of a given integer.
 *              If the number is negative, it returns its positive equivalent.
 *              Otherwise, it returns the number as is.
 *
 * Return: The absolute value of n.
 */

int _abs(int n)
{   
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
