#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @n: int n
 *
 * Description: computes the absolute value of an integer:
 *
 *
 * Return: abs value;
 */

int _abs(int n)
{   
    if (n < 0)
    {
        return (-n);
    }
    return (n);
}


 int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}