#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/* C - Function pointers */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif 
