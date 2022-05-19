#include "lists.h"

/**
 * print_list - prints all the elements of list_t
 * @h: pointer to struct
 *
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cnt;

	cnt = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
