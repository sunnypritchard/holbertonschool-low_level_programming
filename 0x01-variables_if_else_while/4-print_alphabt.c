#include <stdio.h>

/**
 * main - Entry point
 * @void: No parameters
 *
 * Description: Prints all the alphabet letters in lowercase except 'q' and 'e',
 *              followed by a newline.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char lowercase_letters;

    for (lowercase_letters = 'a'; lowercase_letters <= 'z'; lowercase_letters++)
    {
        if (lowercase_letters != 'q' && lowercase_letters != 'e')
        {
            putchar(lowercase_letters);
        }
    }
    putchar('\n');
    return (0);
}