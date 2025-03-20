#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Description: This function takes a variable number of string arguments
 * and prints them, separated by the given separator string. If the separator
 * is NULL, it is not printed. If any string is NULL, "(nil)" is printed
 * in its place. A new line is printed at the end.
 * 
 * Return: None.
 */

 void print_strings(const char *separator, const unsigned int n, ...)
 {
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
 }

