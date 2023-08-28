#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints every single element of a list_t list.
 * @h - pointer to the list_t list's head
 * Return: the total number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
