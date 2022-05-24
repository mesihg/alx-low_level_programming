#include "lists.h"

/**
 * print_listint - prints elements of a list.
 * @h: pointer to head
 *
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_len++;
	}
	return (node_len);
}
