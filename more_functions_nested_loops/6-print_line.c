#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character '_' should be printed
 *
 * Description: If n is 0 or less, the function prints only a newline.
 * Otherwise, it prints a line of '_' characters followed by a newline.
 */
void print_line(int n)
{
	int i;
		
	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
