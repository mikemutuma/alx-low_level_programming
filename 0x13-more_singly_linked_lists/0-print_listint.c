#include "lists.h"

/**
 * print_listint - it prints all components of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: total nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t t = 0;

	while (h)
	{
		printf("%d\n", h->n);
		t++;
		h = h->next;
	}

	return (t);
}

