#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * @void: No parameters
 *
 * Description: Generates a random number and prints whether the number
 *              is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
