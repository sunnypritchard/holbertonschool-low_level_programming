#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector (element)
 *
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
