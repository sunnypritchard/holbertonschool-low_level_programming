#include "main.h"

/**
 * print_square - Prints a square of '#' characters.
 * @size: The size of the square.
 *
 * Description: This function takes an integer `size` and prints
 *              a square of `#` characters with the dimensions
 *              `size` x `size`. If `size` is less than or equal to 0,
 *              no square is printed, and only a new line is printed.
 *
 * Return: void (no return value).
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
