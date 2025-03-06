#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @n: int n
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{   
    
    if (n < 0)
    {
        n = -n; 
    }
    n = n % 10;

    _putchar(n + '0');
    return (n); 
}

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}