#include "main.h"

/**
 * _puts - prints string
 * @str: char *str
 *
 *
 * Return: void (empty).
 */
void _puts(char *str)
{
	for (; *str; _putchar(*str++))
	{
	}
	_putchar('\n');
}
