#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to head
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t length = 0;
while (h != NULL)
{
h = h->next;
length++;
}
return (length);
}
