#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i, cap = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* capitalize current char if needed */
		if (str[i] >= 'a' && str[i] <= 'z' && cap)
		{
			str[i] = str[i] - 32;
		}

		/* check for separators */
		switch (str[i])
		{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
				cap = 1;
				break;
			default:
				cap = 0;
				break;
		}
	}

	return (str);
}
