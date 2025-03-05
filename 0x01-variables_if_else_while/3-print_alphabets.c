#include <stdio.h>
/**
 * main - entry point
 * @void: no paramater
 *
 * Description: Print to stdout:
 *
 * all the alphabet in lowercase
 * and uppercase, followed by a new line.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char a_z;
	char A_Z;

	for (a_z = 'a'; a_z <= 'z'; a_z++)
	{
		putchar(a_z);
	}

	for (A_Z = 'A'; A_Z <= 'Z'; A_Z++)
	{
		putchar(A_Z);
	}
	putchar('\n');
	return (0);
}