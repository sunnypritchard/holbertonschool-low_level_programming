#include <stdio.h>
/**
 * main - entry point
 * @void: no paramater
 *
 * Description: Print to stdout:
 *
 * all lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
    char a_z;

    for (a_z = 'z'; a_z >= 'a'; a_z--)
    {
        putchar(a_z);
    }
    putchar('\n');
    return (0);
}