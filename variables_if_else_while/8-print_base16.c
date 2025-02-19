#include <stdio.h>
/**
 * main - entry point for function
 * @void: no paramater
 *
 * Description: Print to ouput:
 *
 * All the numbers of base 16 in lowercase, followed by new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
