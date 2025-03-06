#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet
 * @void: no paramater
 *
 * Description: Print to stdout:
 *
 * prints 10 times the alphabet, in lowercase, 
 * followed by a new line.
 *
 * Return: void (nothing)
 */
void print_alphabet_x10(void)
{
    char a_z;
    int i;

    for (i = 1; i <= 10; i++)
    {
        for (a_z = 'a'; a_z <= 'z'; a_z++)
        {
            _putchar(a_z);
        }
        _putchar('\n');
    }
}

int main(void)
{
    print_alphabet_x10();
    return (0);
}