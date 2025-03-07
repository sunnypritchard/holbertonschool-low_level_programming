#include "main.h"
/**
 * _islower - prints alphabet
 * @c: int c
 *
 * Description: Print to stdout:
 *
 * checks for lowercase character
 * Returns `1` if `c` is lowercase, 
 * returns `0` otherwise
 *
 * Return: 1 or 0 
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    return (0);
}

int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}