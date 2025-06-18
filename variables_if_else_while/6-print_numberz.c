#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers (0 through 9) using a for loop
 * and the putchar function. Output is followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
