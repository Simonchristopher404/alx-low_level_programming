#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list.
 * @h: Pointer to a singly linked list.
 *
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        h = h->next;
        count++;
    }
    return (count);
}
