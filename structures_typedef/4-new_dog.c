#include "dog.h"


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

/**
 * _strcpy - copies a string.
 * @dest: char *dest
 * @src: char *src
 *
 *
 *
 * Return: ponter to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create new dog
 * @name: pointer to dog name
 * @age: age parameter passed the function
 * @owner: pointer to owner name;
 *
 *
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog =  malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	/* Allocate memory and copy the fields value (name, owner) */
	new_dog->name = malloc(_strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->name, name);

	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
