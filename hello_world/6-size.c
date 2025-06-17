#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the size of various C data types
 * including char, int, long int, long long int, and float using sizeof.
 * The sizes are displayed in bytes using the %zu format specifier.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
