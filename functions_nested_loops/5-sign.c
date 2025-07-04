#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The integer to be checked
 *
 * Description: This function prints '+' if the number is greater than 0,
 *              '0' if the number is equal to 0, and '-' if the number is
 *              less than 0. It also returns 1, 0, or -1 respectively.
 *
 * Return: 1 if n > 0,
 *         0 if n == 0,
 *        -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
