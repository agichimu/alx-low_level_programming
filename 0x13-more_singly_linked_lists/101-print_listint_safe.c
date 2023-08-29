#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the listint_t list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *check_list = head;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		/* Move the checking pointer twice as fast */
		current = current->next;
		if (current)
			current = current->next;

		/* Move the checking pointer one step at a time */
		check_list = check_list->next;

		/* If the two pointers meet, there's a loop */
		if (current == check_list)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

	return count;
}

