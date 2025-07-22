#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/*
 * File: variadic_functions.h
 * Auth: Sunny Pritchard 
 * Desc: Header file containing prototypes for all functions
 *       used in the variadic_functions directory.
 */
#include <stdio.h>
#include <stdarg.h>

/**
 * struct format_printer_s - Maps a type specifier to its printer function
 * @specifier: The format specifier character (e.g. 'c', 'i', 'f', 's')
 * @print_func: Pointer to the function that prints the corresponding argument
 */
typedef struct format_printer_s
{
    char specifier;
    void (*print_func)(const char *separator, va_list *ap);
} format_printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif