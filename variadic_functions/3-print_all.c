#include "variadic_functions.h"

/**
 * print_all - Prints arguments based on the provided format string.
 * @format: A string containing format specifiers:
 *          'c' for char, 'i' for int, 'f' for float, 's' for string.
 *
 * Description: Prints the arguments separated by ", ".
 * If a string is NULL, prints "(nil)" instead.
 * Ends with a newline.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	char sep = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (sep)
		{
			printf(", ");
		}

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				sep = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				sep = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				sep = 1;
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
				sep = 1;
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
