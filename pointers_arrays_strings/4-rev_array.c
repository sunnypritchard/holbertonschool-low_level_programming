#include "main.h"

/**
 * reverse_array - reverses the content of an array of int
 * @a: an arr of int
 * @n: the number of elements of the array
 *
 *
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;
		j--;
	}
}
