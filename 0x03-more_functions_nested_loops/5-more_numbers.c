#include "main.h"

/**
 * more_numbers - Prints x10 the numbers, from 0..14
 * @void: no parameter
 *
 *
 * Return: void (empty)
 */
void more_numbers(void)
{
	int n, j;

	for (n = 0; n < 10; n++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
