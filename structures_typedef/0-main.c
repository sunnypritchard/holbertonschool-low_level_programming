#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
 */

/**
 * struct dog - dog
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 *
 * Description: Define type  struct  dog with the following members:
 *
 * name, owner, and age.
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
