#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 * @void: No parameters
 * 
 * Description: This function uses the custom _putchar function to print
 *              all lowercase letters from 'a' to 'z', followed by a newline,
 *              repeated 10 times.
 *
 * Return: void (no return value).
 */

void print_alphabet_x10(void)
{
	char lowercase_letters;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (lowercase_letters= 'a'; lowercase_letters <= 'z'; lowercase_letters++)
		{
			_putchar(lowercase_letters);
		}
		_putchar('\n');
	}
}
