#include "variadic_functions.h"

/**
 * print_strings - Print a variable number of strings, followed by a new line.
 * @separator: String to print between the strings (NULL means no separator).
 * @n: Number of string arguments passed.
 *
 * Description: Prints each string argument in order. If a string argument is
 * NULL, the function prints "(nil)" instead. A separator string is printed
 * between elements when provided, but not after the last element.
 */
void print_strings(const char *separator, unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, const char *);
		printf("%s", s ? s : "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
