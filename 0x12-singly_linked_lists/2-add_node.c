#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this code adds a node at the start of a linked list
 * @head: two pointers to the list_t list
 * @str: a string is added in to the node
 *
 * Return: ads of the new component, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

