#include <stdio.h>
/**
 * main - entry point for function
 * @void: no paramater
 *
 * Description: Print to ouput:
 *
 * the alphabet in lowercase except the letter 'e' and 'q'
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
