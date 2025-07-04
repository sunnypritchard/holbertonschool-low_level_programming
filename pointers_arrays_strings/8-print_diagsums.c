#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers
 * @a: pointer to the first element of the matrix (cast to int *)
 * @size: the size of the matrix (number of rows/columns)
 *
 * Return: Nothing (void function).
 */
void print_diagsums(int *a, int size)
{
	int i;

	int sum_main_diagonal = 0;
	int sum_second_diagonal = 0;

	for (i = 0; i < size; i++)
	{
		sum_main_diagonal += a[i * size + i];
		sum_second_diagonal += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_main_diagonal, sum_second_diagonal);
}
