#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 * @void: No parameters
 *
 * Description: Generates a random number and checks the last digit of the number.
 *              Prints whether the last digit is greater than 5, less than 6 but not 0,
 *              or equal to 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %i is %i ", n, last_digit);
    
	if (last_digit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n");
	}
	return (0);
}