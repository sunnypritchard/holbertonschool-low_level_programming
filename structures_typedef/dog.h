#ifndef DOG_H
#define DOG_H


/**
 * struct dog - Structure that stores dog information
 * @name: Name of the dog
 * @owner: Owner's name
 * @age: Age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

/* initialize struct dog fields */
void init_dog(struct dog *d, char *name, float age, char *owner);
/*print struct dog */
void print_dog(struct dog *d);
#endif
