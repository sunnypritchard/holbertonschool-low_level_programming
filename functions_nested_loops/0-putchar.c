#include "main.h"
/**
 * main - print _putchar
 * @void: no paramater
 *
 * Description: Print to ouput '_putchar':
 *
 * Prints '_putchar', followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char str_putchar[] = "_putchar\n";
	int i;

	for (i = 0; str_putchar[i] != '\0'; i++)
	{
		_putchar(str_putchar[i]);
	}
	return (0);
}
