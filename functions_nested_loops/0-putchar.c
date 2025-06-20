#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This function prints the string "_putchar"
 * followed by a new line, using the custom _putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str_putchar[] = "_putchar";
	int i;

	for (i = 0; str_putchar[i] != '\0'; i++)
	{
		_putchar(str_putchar[i]);
	}
	_putchar('\n');

	return (0);
}
