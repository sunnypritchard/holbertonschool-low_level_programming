#include "main.h"

/**
 * puts2 - prints every other char of a string
 * @str: char *str
 *
 *
 * Return: void (empty).
 */
void puts2(char *str)
{
	int i = 0;

	while (*str)
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
		}
		i++;
		str++;
	}
	_putchar('\n');
}
