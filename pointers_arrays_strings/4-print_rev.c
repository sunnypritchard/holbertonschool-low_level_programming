#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: char *s
 *
 *
 * Return: void (empty).
 */
void print_rev(char *s)
{
	char *start = s;

	/* Move to the null terminator */
	while (*s)
	{
		s++;
	}
	/* Prints in reverse */
	while (s > start)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
