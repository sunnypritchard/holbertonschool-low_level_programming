#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet followed by
 * the uppercase alphabet using two separate for loops and the putchar
 * function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lowerChar;
	int upperChar;

	for (lowerChar = 'a'; lowerChar <= 'z'; lowerChar++)
		putchar(lowerChar);
	for (upperChar = 'A'; upperChar <= 'Z'; upperChar++)
		putchar(upperChar);
	putchar('\n');
	return (0);
}
