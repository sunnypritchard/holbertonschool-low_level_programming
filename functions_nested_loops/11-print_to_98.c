#include "main.h"
/**
 * print_to_98 -  prints all natural numbers from n to 98
 * @n: int n
 *
 * Description: Print to stdout:
 *
 * prints all natural numbers from n to 98,
 * followed by a new line.
 *
 *
 * Return:  void (nothing).
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

