#include "lists.h"


/**
 * print_list - Prints every single element of a list_t list
 * @h: pointer  to a linked list head
 * Return: returns number of elements in a list
 */

size_t print_list(const list_t *h)
{
	 size_t n_elems;

    n_elems = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[%d] %s\n", 0, "(nil)");
        else
            printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        n_elems++;
    }

    return (n_elems);
}
