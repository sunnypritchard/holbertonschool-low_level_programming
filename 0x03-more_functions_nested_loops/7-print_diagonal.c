#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: int n
 *
 *
 * Return: void (empty)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92); /* Printing backlash */
		_putchar('\n');
	}
}
