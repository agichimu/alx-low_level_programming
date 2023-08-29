#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the address of the head of the listint_t list
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		count++;

	
		if (next == *h)
		{
			*h = NULL;
			return count;
		}

		current = next;
	}

	*h = NULL;
	return count;
}
