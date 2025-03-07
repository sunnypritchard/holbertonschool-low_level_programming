#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int pointer 1
 * @b: int pointer 2
 *
 * 
 * Return: void (nothing)
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}