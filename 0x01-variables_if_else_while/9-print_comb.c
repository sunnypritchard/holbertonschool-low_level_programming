#include <stdio.h>
/**
 * main - entry point
 * @void: no paramater
 *
 * Description: Print to stdout:
 *
 * prints all possible combinations of single-digit numbers
 * separated by `,` followed by a space
 *
 * Return: always 0 (success)
 */
int main()
{
    int n;

    for (n = 0; n <= 9; n++)
    {
        putchar(n + '0');

        if (n != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);
}