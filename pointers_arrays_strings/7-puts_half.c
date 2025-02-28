#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: char *str
 *
 *
 * Return: void (empty).
 */
void puts_half(char *str)
{
	int i, str_len, start;

	for (str_len = 0; str[str_len] != '\0'; str_len++)
	{
	}

	start = str_len / 2;

	if (str_len % 2 != 0)
	{
		str++;
	}

	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
