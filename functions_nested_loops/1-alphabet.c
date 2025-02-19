#include "main.h"
/**
 * print_alphabet - print lowercase alphabet
 * @void: no paramater
 *
 * Description: Print to output:
 *
 * Prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
