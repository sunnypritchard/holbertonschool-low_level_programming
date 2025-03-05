#include <stdio.h>
/**
 * main - entry point
 * @void: no paramater
 *
 * Description: Print to stdout:
 *
 * all numbers of base 16, 
 * followed by a new line
 *
 * Return: always 0 (success)
 */
int main(void)
{
    int n;
    char c;

    for (n = 0; n <= 9; n++)
    {
        putchar(n + '0');
    }

    for (c = 'a'; c <= 'f'; c++)
    {
        putchar(c);
    }
    putchar('\n');
    return (0);
}