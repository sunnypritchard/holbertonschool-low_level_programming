#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to check.
 *
 * Description: This function extracts the last digit of an integer,
 *              prints it using _putchar, and returns the digit.
 *
 * Return: The last digit of n.
 */

int print_last_digit(int n)
{   
	if (n < 0)
	{
		n = -n;
	}
	
	n = n % 10;

	_putchar(n + '0');
	return (n); 
}