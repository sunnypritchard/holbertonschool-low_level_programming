#include "3-calc.h"

/**
 * main - entry point for simple calculator
 * @argc: argument count
 * @argv: argument vector
 *
 * Usage: calc num1 operator num2
 *
 * Return: 0 on success, or exits with specified status codes on error.
 *   98 - wrong number of arguments
 *   99 - invalid operator
 *   100 - division or modulo by 0
 */
int main(int argc, char *argv[])
{
    int a, b, result;
    int (*op_func)(int, int);

    if (argc != 4) /* 1st allowed if */
    {
        printf("Error\n");
        exit(98);
    }

    op_func = get_op_func(argv[2]);
    if (!op_func) /* 2nd allowed if */
    {
        printf("Error\n");
        exit(99);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0) /* 3rd allowed if */
    {
        printf("Error\n");
        exit(100);
    }

    result = op_func(a, b);
    printf("%d\n", result);
    return (0);
}
