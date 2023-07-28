#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns all number of elements in a linked list.
 * @h: This is a pointer to the list_t list.
 *
 * Return: Number of elements in the list.
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}
