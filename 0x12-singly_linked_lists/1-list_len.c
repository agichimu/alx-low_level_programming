#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the list in a linked list.
 *
 * Return: Number of elements in the linked list.
 */

size_t list_len(const list_t *h) {
    size_t count = 0;

    for (; h != NULL; h = h->next) {
        count++;
    }

    return count;
}
