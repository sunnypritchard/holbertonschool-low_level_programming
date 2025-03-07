#include "main.h"

/**
 * print_line - Draws a straight line
 * @n: int n
 *
 *
 * Return: void (empty)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
