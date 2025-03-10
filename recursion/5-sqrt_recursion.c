#include "main.h"

/**
 * _sqrt - helper function to solve _sqrt_recursion
 * @n:  int number
 * @sq: number to determine if square root
 *
 * Return: square root
 */

int _sqrt(int n, int sq)
{
	if (n == sq * sq)
	{
		return (sq);
	}
	else if (sq < n)
	{
		return (_sqrt(n, ++sq));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 *
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
