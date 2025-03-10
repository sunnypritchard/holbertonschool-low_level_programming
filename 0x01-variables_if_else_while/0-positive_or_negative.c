/* more headers goes there */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point 
 * @void: no paramater
 *
 * Description: Print to output:
 *
 * if the number is positive, negative or zero
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
    if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);
    }
    else
    {
        printf("%d is positive\n", n);
    }
	return (0);
}