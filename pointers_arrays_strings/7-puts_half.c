#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * If the number of characters is odd, the function prints from the
 * (length - 1) / 2 + 1 index onward.
 *
 * @str: The input string to be processed.
 *
 * Return: void (nothing is returned)
 */
void puts_half(char *str)
{
	int len, i, n;

	for (len = 0; str[len]; len++)
		;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2 + 1;

	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
