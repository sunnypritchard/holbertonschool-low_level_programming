#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14, ten times,
 *                followed by a new line after each set.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
