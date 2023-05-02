#include "lists.h"

/**
 * listint_len - this returns the total of components in a linked lists
 * @h: linked list of type listint_t to go through
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}

	return (t);
}

