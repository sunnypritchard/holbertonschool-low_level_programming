#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value of the number in the string.
 *         If there are no numbers in the string, returns 0.
 */
int _atoi(char *s)
{
	int idx;
	int sign = 1, nb = 0;

	for (idx = 0; s[idx] == ' ' || s[idx] == '\t' || s[idx] == '\n'; idx++)
		;

	for (; s[idx] == '+' || s[idx] == '-'; idx++)
	{
		if (s[idx] == '-')
			sign *= -1;
	}

	if (s[idx] < '0' || s[idx] > '9')
	{
		return (0);
	}

	for (; s[idx] >= '0' && s[idx] <= '9'; idx++)
		nb = nb * 10 + (s[idx] - '0');

	return (nb * sign);
}
