#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * @void: No arguments
 *
 * Description: Prints a quote to the standard error output
 *		using the write system call.
 *
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, 59);
	return (1);
}
