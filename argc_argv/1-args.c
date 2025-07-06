#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: argument count
 * @argv: argument vector (unused here)
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	/* unused parameter */
	(void)argv;
	/* subtract 1 to exclude the program name itself */
	printf("%d\n", argc - 1);

	return (0);
}
