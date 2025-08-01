#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Description: Uses nested loops to calculate and print the times table.
 * Each product is properly formatted with spaces and commas for readability.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar('0');
			}
			else if (i * j < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(i * j + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
