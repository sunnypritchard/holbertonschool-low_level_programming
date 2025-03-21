#include <stdio.h>

/**
 * main - Entry point
 * @void: No parameters
 * 
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 *              followed by a newline, using printf.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int n;

    for (n = 0; n <= 9; n++)
    {
        printf("%d", n);
    }
    printf("\n");
    return (0);
}