#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - entry point for function
 * @void: no paramater
 *
 * Description: Print out the last digt:
 *
 * check if the n last digit is > 5, < 6 and != 0
 * and print the corresponding string
 *
 * Return: always 0 (success)
 */
/* betty style doc for function main goes there */
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