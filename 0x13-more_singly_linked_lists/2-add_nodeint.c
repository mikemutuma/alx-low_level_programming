#include "lists.h"

/**
 * add_nodeint - it adds a new component at the start of the linked list
 * @head: pointer to the start component in the list
 * @n: data to insert in that new component
 *
 * Return: it points to the new component, or NULL if therre is an error
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

