#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: pointer to head
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}
	return (cnt);
}
