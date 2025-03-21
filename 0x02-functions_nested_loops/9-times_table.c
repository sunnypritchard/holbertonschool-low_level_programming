#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0.
 *
 * Description: This function prints the multiplication table from 0 to 9
 *              in a 10x10 grid format. The values are separated by commas
 *              and spaces, with each row ending in a new line.
 *
 * Return: void (no return value).
 */

void times_table(void)
{
	int rows = 10;
	int cols = 10;
	int i, j;

	for (i = 0; i < rows; i++)
	{

		for (j = 0; j < cols; j++)
		{

			int product = i * j;

			if (product < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(product + '0');
			}
			else
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
			}

			if (j < cols - 1)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}