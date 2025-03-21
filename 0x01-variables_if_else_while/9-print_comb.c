#include <stdio.h>

/**
 * main - Entry point
 * @void: No parameters
 * 
 * Description: Prints all single-digit numbers of base 10 separated by commas
 *              and spaces, followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main()
{
    int single_digit;

    for (single_digit = 0; single_digit <= 9; single_digit++)
    {
        putchar(single_digit + '0');

        if (single_digit != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);
}