#include "lists.h"

/**
 * get_nodeint_at_index - the component at a specific point in a linked list
 * @head: beginning node in the linked list
 * @index: number of the node to return
 *
 * Return: it points to the node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}

