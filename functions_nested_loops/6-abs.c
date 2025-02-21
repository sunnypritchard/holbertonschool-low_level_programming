#include "main.h"

/**
 * _abs - print sign of a number
 * @n: int n
 *
 * Description: Computes the absolute value of an integer.
 *
 *
 * Return: 0.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	return (n);
}
