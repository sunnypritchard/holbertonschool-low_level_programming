#include "main.h"

/**
 *print_array - prints n elementa of an arr of int.
 * @a: int arr
 * @n: int arrSize
 *
 *
 * Return: void (empty).
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
