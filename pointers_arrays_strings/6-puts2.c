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

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
