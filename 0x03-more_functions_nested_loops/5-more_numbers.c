#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times.
 * @void: No parameters
 * 
 * Description: This function prints the numbers from 0 to 14,
 *              ten times, with each set printed on a new line.
 *
 * Return: void (no return value).
 */

void more_numbers(void)
{
	int row, num;

	for (row = 0; row < 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
