#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: pointer to the string length to be returned
 * 
 * 
 * Return: string length
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}