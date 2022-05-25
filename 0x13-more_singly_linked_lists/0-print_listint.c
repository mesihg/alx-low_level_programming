#include "lists.h"

/**
 * print_listint - prints elements of a list.
 * @h: pointer to head
 *
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
