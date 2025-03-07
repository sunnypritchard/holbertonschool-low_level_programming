#include "main.h"

/**
 * _puts -  prints a string, followed by new line
 * @str:  pointer to the string
 * 
 * Return: void (nothing)
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
	return;
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}