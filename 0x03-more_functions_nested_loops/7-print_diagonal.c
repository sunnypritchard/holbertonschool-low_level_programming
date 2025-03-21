#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' is printed.
 *
 * Description: This function takes an integer `n` and prints a diagonal
 *              line consisting of `\` characters. The line is drawn 
 *              such that each new line of output has an additional 
 *              leading space, creating a diagonal appearance. If `n`
 *              is less than or equal to 0, no diagonal line is printed.
 *
 * Return: void (no return value).
 */

void print_diagonal(int n)
{
	int row, spaces;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (row = 0; row < n; row++)
	{
		for (spaces = 0; spaces < row; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\'); 
		_putchar('\n');
	}
}
