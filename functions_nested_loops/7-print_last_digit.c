#include "main.h"

/**
 * print_last_digit - prints the last of a number
 * @n: int n
 *
 * Description: Prints the last digit of a number
 *
 *
 * Return: n last digit;
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r <= 0)
		r *= -1;
	_putchar(r + '0');
	return (r);
}
