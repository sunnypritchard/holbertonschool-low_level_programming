#include "main.h"

/**
 * print_diagsums - prints diagonal sums of square matrix
 *
 * @a: square matrix of integers
 * @size: col & row size of matrix
 *
 * Return: always void
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", sum1, sum2);
}
