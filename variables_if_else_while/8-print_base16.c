#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all hexadecimal digits in lowercase (0–9 and a–f)
 * using putchar and two for loops.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int single_digit;
	char hex_lowercase;

	for (single_digit = 0; single_digit <= 9; single_digit++)
		putchar(single_digit + '0');

	for (hex_lowercase = 'a'; hex_lowercase <= 'f'; hex_lowercase++)
		putchar(hex_lowercase);

	putchar('\n');

	return (0);
}
