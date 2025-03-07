#include "main.h"
/**
 * main - print _putchar
 * @void: no paramater
 *
 * Description: Print to stdout:
 *
 * the string '_putchar', followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
    int i;
    char str[] = "_putchar";

    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
    return (0);
}