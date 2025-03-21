#include "main.h"

/**
 * main - Entry point
 * @void: No parameters
 *
 * Description: Prints "_putchar" followed by a newline using the _putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char str_putchar[] = "_putchar";

	for (i = 0; str_putchar[i] != '\0'; i++)
	{
		_putchar(str_putchar[i]);
	}
		_putchar('\n');
	return (0);
}