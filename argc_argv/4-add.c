#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number - checks if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if string contains only digits, 0 otherwise
 */
int is_number(char *str)
{
	int i = 0;

	if (str[0] == '\0')
	{
		return (0);
	}

	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}

	return (1);
}

/**
 * main - adds positive numbers passed as arguments
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		/* check if the arg contains only digits */
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		/* convert arg to integer and add to sum */
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
