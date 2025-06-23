#include "main.h"

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
