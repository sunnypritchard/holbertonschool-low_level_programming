#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to the head of the list
 * @str: string to be added
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int str_len = 0;

	while (str[str_len])
	{	
		str_len++;
	}

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{	
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
