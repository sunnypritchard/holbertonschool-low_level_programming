#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using the '#' character.
 * @size: The size of the triangle's base and height.
 *
 * Description: For a given size > 0, prints a triangle aligned to the right,
 * with each row containing increasing numbers of '#' characters and decreasing
 * numbers of spaces before them. If size <= 0, prints only a newline.
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (space = 0; space < size - row; space++)
		       _putchar(' ');
		for (hash = 0; hash < row; hash++)
			_putchar('#');
		_putchar('\n');
	}
}	
