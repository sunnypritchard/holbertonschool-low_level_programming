#include "main.h"
#include <stdlib.h>

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
	int operand1, operand2, product;

	if (argc > 0)
	{
		if (argc < 3)
		{
			printf("Error\n");
			return (1);
		}

		operand1 =  atoi(argv[1]);
		operand2 =  atoi(argv[1]);
		product = operand1 * operand2;

		printf("%d\n", product);

	}
	return (0);
}
