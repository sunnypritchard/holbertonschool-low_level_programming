#include "main.h"


/**
 * factorial - returns the factorial of a given number
 * @n: the number to compute the factorial of
 *
 * Return: factorial of n; -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
