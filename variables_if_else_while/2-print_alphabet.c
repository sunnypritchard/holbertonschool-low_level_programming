#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet from 'a' to 'z'
 * using a for loop and the putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
