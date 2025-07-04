#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: pointer to the string to be reversed
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	/* recursive call with next char */
	_print_rev_recursion(s + 1);

	/* print the char after recursion return */
	_putchar(*s);
}
