#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Description: Uses a for loop to iterate through the lowercase letters
 * of the alphabet and prints each character using the _putchar function.
 */
void print_alphabet(void)
{
	char letter_lowercase;

	for (letter_lowercase = 'a'; letter_lowercase <= 'z'; letter_lowercase++)
	{
		_putchar(letter_lowercase);
	}
	_putchar('\n');
}
