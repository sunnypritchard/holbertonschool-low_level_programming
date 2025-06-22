#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int abs_value;

       	abs_value = _abs(-1);
	printf("%d\n", abs_value);

	abs_value = _abs(0);
	printf("%d\n", abs_value);

	abs_value = _abs(1);
	printf("%d\n", abs_value);

	abs_value = _abs(-98);
	printf("%d\n", abs_value);

	return (0);
}
