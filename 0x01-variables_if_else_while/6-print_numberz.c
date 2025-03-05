#include <stdio.h>
/**
 * main - entry point 
 * @void: no paramater
 *
 * Description: Print to ouput:
 *
 * All single digit numbers of the base 10 starting from 0
 * using the function putchar, and ASCII.
 *
 * Return: always 0 (success)
 */
int main(void)
{
    int n;

    for (n = 0; n <= 9; n++)
    {
        putchar(n + '0');
    }
    putchar('\n');
    return (0);
}