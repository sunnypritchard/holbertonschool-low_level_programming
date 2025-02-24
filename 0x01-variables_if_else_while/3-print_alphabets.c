#include <stdio.h>
/**
 * main - entry point for function
 * @void: no paramater
 *
 * Description: Print to ouput:
 *
 * the alphabet in lowercase and uppercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	for (j = 65; j < 91; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
