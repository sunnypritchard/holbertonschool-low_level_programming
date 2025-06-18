#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all lowercase letters except 'q' and 'e'
 * using a for loop and the putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');
	return (0);
}
