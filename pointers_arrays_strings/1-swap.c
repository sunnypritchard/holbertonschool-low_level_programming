#include "main.h"

/**
 * swap_int - update value of int poiter
 * @a: int *a
 * @b: int *b
 *
 *
 * Return: void (empty)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a; /* Store the value of a (98) in temp */
	*a = *b;
	*b = temp;
}
