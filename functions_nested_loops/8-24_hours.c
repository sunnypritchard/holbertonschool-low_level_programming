#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 *              from 00:00 to 23:59.
 *
 * Description: This function uses nested loops to iterate through
 * all the possible hours and minutes in a 24-hour day and prints
 * them in HH:MM format, followed by a newline.
 */
void jack_bauer(void)
{
	int hour, min;
	int h1, h2, m1, m2;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			h1 = hour / 10;
			h2 = hour % 10;
			m1 = min / 10;
			m2 = min % 10;

			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
		}
	}
}
