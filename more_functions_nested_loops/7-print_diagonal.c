#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the character '\' should be printed
 *
 * Description: If n is 0 or less, the function prints a newline.
 * Otherwise, it prints n lines with an increasing number of spaces
 * before the backslash to simulate a diagonal line.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
