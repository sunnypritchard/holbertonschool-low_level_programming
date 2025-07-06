#include <stdio.h>

/**
 * main - prints its own name followed by a new line
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	/* unused parameter, but kept for convention */
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
