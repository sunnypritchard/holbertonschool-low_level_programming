#include <stdio.h>

/**
 * main - Entry point
 * @void: No parameters
 * 
 * Description: Prints all the alphabet letters in lowercase followed by uppercase,
 *              followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase_letters;
	char uppercase_letters;

	for (lowercase_letters = 'a'; lowercase_letters <= 'z'; lowercase_letters++)
	{
		putchar(lowercase_letters);
	}

	for (uppercase_letters = 'A'; uppercase_letters <= 'Z'; uppercase_letters++)
	{
		putchar(uppercase_letters);
	}
	putchar('\n');
	return (0);
}