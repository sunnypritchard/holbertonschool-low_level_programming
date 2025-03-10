#include "main.h"

/**
 * is_prime_number - return 1 if prime number, otherwise 0
 * @n:  int number
 *
 * Return: prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int divider;

	if (n < 2)
		return (0);

	for (divider = 2; divider * divider <= n; ++divider)
	{
		if (n % divider == 0)
		{
		return (0);
		}
	}
	return (1);
}
