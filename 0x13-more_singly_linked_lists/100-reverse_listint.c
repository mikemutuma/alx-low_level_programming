#include "lists.h"

/**
 * reverse_listint - it reverses a linked list
 * @head: it points to the starting comp in the list
 *
 * Return: it points to the starting comp in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

