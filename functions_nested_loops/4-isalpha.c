#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabetic letter
 * @c: The character to check (as an ASCII value)
 *
 * Description: Checks if the input character is a letter from
 * a-z or A-Z. Returns 1 if true, 0 otherwise.
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	char lowercase_letter;
	char uppercase_letter;

	lowercase_letter = 'a';
	uppercase_letter = 'A';

	for (lowercase_letter = 'a'; lowercase_letter <= 'z'; lowercase_letter++)
		if (c == lowercase_letter)
			return (1);

	for (uppercase_letter = 'A'; uppercase_letter <= 'Z'; uppercase_letter++)
		if (c == uppercase_letter)
			return (1);

	return (0);
}
