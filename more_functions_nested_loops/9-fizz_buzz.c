#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers from 1 to 100. For multiples of 3, prints "Fizz"
 * instead of the number. For multiples of 5, prints "Buzz". For numbers which
 * are multiples of both 3 and 5, prints "FizzBuzz". Each output is separated
 * by a space.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
