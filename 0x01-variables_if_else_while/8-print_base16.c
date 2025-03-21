#include <stdio.h>

/**
 * main - Entry point
 * @void: No parameters
 * 
 * Description: Prints all single-digit numbers of base 10 followed by the
 *              first six letters of the alphabet in lowercase (a-f),
 *              followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int single_digit;
    char lowercase_letters;

    for (single_digit = 0; single_digit <= 9; single_digit++)
    {
        putchar(single_digit + '0');
    }

    for (lowercase_letters = 'a'; lowercase_letters <= 'f'; lowercase_letters++)
    {
        putchar(lowercase_letters);
    }
    putchar('\n');
    return (0);
}