#include "variadic_functions.h"

/**
 * print_char - Prints a char argument
 * @separator: String to print before the argument (e.g. ", ")
 * @args: Pointer to the va_list containing the arguments
 */
static void print_char (const char *separator, va_list *args)
{
	printf("%s%c", separator, (char)va_arg(*args, int));
}

/**
 * print_int - Prints an int argument
 * @separator: String to print before the argument
 * @args: Pointer to the va_list containing the arguments
 */
static void print_int(const char *separator, va_list *args)
{
	printf("%s%d", separator, va_arg(*args, int));
}

/**
 * print_float - Prints a float argument
 * @separator: String to print before the argument
 * @args: Pointer to the va_list containing the arguments
 */
static void print_float(const char *separator, va_list *args)
{
	printf("%s%f", separator, va_arg(*args, double));
}

/**
 * print_string - Prints a string argument
 * @separator: String to print before the argument
 * @args: Pointer to the va_list containing the arguments
 */
static void print_string(const char *separator, va_list *args)
{
	char *str;
	str = va_arg(*args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s%s", separator, str);
}


/**
 * print_all - Prints arguments based on a format string
 * @format: A string containing format specifiers ('c', 'i', 'f', 's')
 *
 * Description: The function prints all arguments separated by ", ",
 *              according to the specifiers in @format.
 */
void print_all(const char * const format, ...)
{
	const format_printer_t printers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	va_list ap;
	const char *separator = "";
	size_t i = 0;
	size_t j;
	size_t n_printers = sizeof(printers) / sizeof(printers[0]);

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < n_printers)
		{
			if (format[i] == printers[j].specifier)
			{
				printers[j].print_func(separator, &ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	
	va_end(ap);
	printf("\n");
}
