#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet x10
 * @void: no paramater
 *
 * Description: Print to output:
 *
 * Prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
