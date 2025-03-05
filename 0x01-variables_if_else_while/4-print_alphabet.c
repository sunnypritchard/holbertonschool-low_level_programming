#include <stdio.h>
/**
 * main - entry point
 * @void: no paramater
 *
 * Description: Print to stdout:
 *
 * all the alphabet in lowercase
 * except 'q' and 'e', followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
    char a_z;

    for (a_z = 'a'; a_z <= 'z'; a_z++)
    {
        if (a_z != 'q' && a_z != 'e')
        {
            putchar(a_z);
        }
    }
    putchar('\n');
    return (0);
}