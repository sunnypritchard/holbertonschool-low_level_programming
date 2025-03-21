#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a newline.
 * @void: No parameters
 *
 * Description: This function uses the custom _putchar function to print
 *              all lowercase letters from 'a' to 'z', followed by a newline.
 *
 * Return: void (no return value).
 */

void print_alphabet(void)
{
	char lowercase_letters;

	for (lowercase_letters = 'a'; lowercase_letters <= 'z'; lowercase_letters++)
	{
		_putchar(lowercase_letters);
	}
	_putchar('\n');
}
