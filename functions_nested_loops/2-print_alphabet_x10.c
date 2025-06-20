#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: Uses nested loops to print the alphabet 10 times.
 * Each alphabet line is followed by a newline character.
 * The _putchar function is used to print each character.
 */

void print_alphabet_x10(void)
{
	char lowercase_letter;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (lowercase_letter = 'a'; lowercase_letter <= 'z'; lowercase_letter++)
			_putchar(lowercase_letter);
		_putchar('\n');
	}
}
