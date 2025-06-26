#include "main.h"

/**
 * print_square - Prints a square of '#' characters
 * @size: The size of the square (number of rows and columns)
 *
 * Description: Prints a square followed by a new line. If size is 0
 * or less, only a newline is printed.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
