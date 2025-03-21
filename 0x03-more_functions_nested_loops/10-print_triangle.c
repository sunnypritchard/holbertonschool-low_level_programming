#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle using '#' characters.
 * @size: The size of the triangle.
 *
 * Description: This function takes an integer `size` and prints a right-angled
 *              triangle of `#` characters. The height and base of the triangle
 *              are both equal to `size`. If `size` is less than or equal to 0,
 *              no triangle is printed, and only a new line is printed.
 *
 * Return: void (no return value).
 */

void print_triangle(int size)
{
	int row, space, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (space = 1; space < (size - row); space++)
		{
			_putchar(' ');
		}
		for (col = 0; col <= row; col++)
		{	
			_putchar('#');
		}
		_putchar('\n');
	}
}

