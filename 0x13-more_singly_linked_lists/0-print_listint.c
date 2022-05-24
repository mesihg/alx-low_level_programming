#include "lists.h"

/**
 * print_listint - prints all the elements of the given list
 * @h: pointer to head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t length = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
length++;
}
return (length);
}
