#include "lists.h"

/**
 * sum_listint - it gets the totoal of all the listint_t list
 * @head: starting node in the linked list
 *
 * Return: it returns the total
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp = head;

	while (temp)
	{
		total += temp->n;
		temp = temp->next;
	}

	return (total);
}

