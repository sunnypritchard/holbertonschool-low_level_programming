# C - Variadic functions

## Learning Objectives

- What are variadic functions
- How to use `va_start`, `va_arg` and `va_end` macros
- Why and how to use the `const` type qualifier

## Tasks

Write a function that returns the sum of all its parameters.

- Prototype: `int sum_them_all(const unsigned int n, ...);`
- If `n == 0`, return `0`

### Solution: [0-sum_them_all.c](/0-sum_them_all.c)

```bash
$ amonkeyprogrammer@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-sum_them_all.c -o a
$ amonkeyprogrammer@ubuntu:~/0x0f. variadic functions$ ./a 
1122
500
$ amonkeyprogrammer@ubuntu:~/0x0f. variadic functions$
```
