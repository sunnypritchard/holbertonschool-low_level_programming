#include "3-calc.h"

/**
 * main - Entry point of the calculator program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, exits with error codes otherwise.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char zero;
	int (*operation)(int, int);

	/* handle invalid number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* get the corresponding function */
	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	zero = *argv[2];

	if ((zero == '/' || zero == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
