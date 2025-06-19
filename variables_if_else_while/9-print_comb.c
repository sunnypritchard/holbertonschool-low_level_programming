#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the digits 0 through 9 using an integer array
 * and the putchar function. Each digit is printed as a character.
 * A comma and space separate the digits, except after the last digit.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
