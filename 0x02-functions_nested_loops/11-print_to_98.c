#include "main.h"

/**
 * print_to_98 - Prints all numbers from a given number to 98.
 * @n: The starting number.
 *
 * Description: This function prints all the numbers from `n` to 98, 
 *              in ascending order if `n` is less than or equal to 98,
 *              and in descending order if `n` is greater than 98.
 *              Each number is separated by a comma and a space.
 *
 * Return: void (no return value).
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
