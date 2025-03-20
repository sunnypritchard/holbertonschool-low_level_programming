#include "variadic_functions.h"

/**
 * print_all - Prints various types of arguments based on a format string.
 * @format: A list of types of arguments passed to the function.
 *
 * Description:
 * 'c' -> char
 * 'i' -> integer
 * 'f' -> float
 * 's' -> string (prints (nil) if NULL)
 * Any other character in format is ignored.
 *
 * Return: None.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *separator = "";

	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
