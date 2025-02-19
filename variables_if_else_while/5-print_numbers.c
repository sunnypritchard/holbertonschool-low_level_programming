#include <stdio.h>
/**
 * main - entry point for function
 * @void: no paramater
 *
 * Description: Print to ouput:
 *
 * All single digit numbers of
 * the base 10 starting from 0.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
