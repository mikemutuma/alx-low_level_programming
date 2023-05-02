#include "lists.h"

/**
 * pop_listint - it deletes the starting node of a linked list
 * @head: it points to the beginning component in the linked list
 *
 * Return: it returns the data in the component that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int t;

	if (!head || !*head)
		return (0);

	t = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (t);
}

