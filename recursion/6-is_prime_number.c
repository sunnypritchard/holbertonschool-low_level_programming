#include "main.h"

/**
 * check_prime - check for prime n recursive
 * @n:  int number
 * @divider: int divider
 *
 * Return: prime number, otherwise return 0
 */


int check_prime(int n, int divider)
{
	if (n < 2)
	{
		return (0);
	}
	if (divider * divider > n)
	{
		return (1);
	}
	if (n % divider == 0)
	{
		return (0);
	}
	return (check_prime(n, divider + 1));
}

/**
 * is_prime_number - return 1 if prime number, otherwise 0
 * @n:  int number
 *
 * Return: prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

