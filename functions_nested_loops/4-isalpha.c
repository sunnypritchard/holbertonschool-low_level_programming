#include "main.h"
/**
 * _isalpha - prints alphabet
 * @c: int c
 *
 * Description: Print to stdout:
 *
 * checks for lowercase character
 * Returns `1` if `c` is lowercase or uppercase, 
 * returns `0` otherwise
 *
 * Return: 1 or 0 
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return (1);
    }
    return (0);
}

int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}