#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @void: no paramater
 *
 * Description: Print to stdout:
 *
 * prints the 9 times table, starting with 0.
 *
 * Return: void (nothing)
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
