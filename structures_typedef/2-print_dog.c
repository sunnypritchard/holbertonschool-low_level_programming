#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to struct dog
 *
 * Description: Prints the name, age, and owner of the dog.
 * If any of the string fields are NULL, it prints (nil) instead.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
