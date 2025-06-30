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
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
