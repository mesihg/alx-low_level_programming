#include "list.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of list_t
 * @h: pointer to struct
 *
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{

size_t count = 0;

while (h != NULL)
{
if (h->str != NULL)
	printf("[%u] %s\n", h->len, h->str);
else
	printf("[%u] %s\n", 0, "(nil)");
h = h->next;
count++;
}
return (count);
}
