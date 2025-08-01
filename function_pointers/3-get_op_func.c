#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation asked
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds to @s, or NULL if no match
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op && ((*ops[i].op) != *s || s[1]))
		i++;
	return (ops[i].f);
}
