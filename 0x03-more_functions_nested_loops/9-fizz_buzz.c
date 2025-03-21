#include "main.h"

/**
 * main - Prints the numbers from 1 to 100, but for multiples of 3,
 *        prints "Fizz" instead of the number, and for multiples of 5,
 *        prints "Buzz". For numbers which are multiples of both 3 and 5,
 *        prints "FizzBuzz".
 *
 * Description: This function loops through numbers from 1 to 100 and
 *              checks for numbers divisible by 3, 5, or both. It prints
 *              the corresponding word or the number itself. The output
 *              is printed on a single line, with spaces between the numbers
 *              or words, except for the last number.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
