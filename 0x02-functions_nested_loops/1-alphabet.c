#include "main.h"
/**
 * print_alphabet - prints alphabet
 * @void: no paramater
 *
 * Description: Print to stdout:
 *
 * The alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: void (nothing)
 */
void print_alphabet(void)
{
    char a_z;

    for (a_z = 'a'; a_z <= 'z'; a_z++)
    {
        _putchar(a_z);
    }
    _putchar('\n');
}

 int main(void)
{
    print_alphabet();
    return (0);
}
