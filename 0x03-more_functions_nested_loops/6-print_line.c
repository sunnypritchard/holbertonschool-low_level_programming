#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character '_' is printed.
 *
 * Description: This function takes an integer `n` and prints
 *              the character '_' `n` times. If `n` is 0 or less,
 *              no line is printed.
 *
 * Return: void (no return value).
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
