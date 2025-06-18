#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers from 0 to 9 using a for loop and printf.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	printf("\n");

	return (0);
}
