#include "dog.h"


/**
 * print_dog - print struct dog
 * @d: pointer to type struct dog
 *
 * Return: void (empty)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	/* Print fields value, check if it's NULL */
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
