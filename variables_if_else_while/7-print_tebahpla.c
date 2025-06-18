#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse order,
 * from 'z' to 'a', using a for loop and the putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowerCaseAlphabet = 'z';

	for (lowerCaseAlphabet = 'z'; lowerCaseAlphabet >= 'a'; lowerCaseAlphabet--)
		putchar(lowerCaseAlphabet);
	putchar('\n');

	return (0);
}
