#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: The input string
 *
 * Description: This function prints every second character from a string
 * followed by a new line.
 */
void puts2(char *str)
{
	int i, len;

	for (len = 0; str[len] != '\0'; len++)
		;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
