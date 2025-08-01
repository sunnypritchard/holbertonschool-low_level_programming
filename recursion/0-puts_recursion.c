#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line, recursively.
 * @s: pointer to the string to print.
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);

	/* recursive call with next character */
	_puts_recursion(s + 1);
}
