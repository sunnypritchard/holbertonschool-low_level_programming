#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number, extracts the
 * last digit, and prints a message based on whether the last digit is
 * greater than 5, is 0, or is less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of ");
	if (n % 10 > 5)
		printf("%d is %d and is greater than 5\n", n, n % 10);
	if (n % 10 == 0)
		printf("%d is %d and is 0\n", n, n % 10);
	if (n % 10 < 6 && n % 10 != 0)
		printf("%d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
