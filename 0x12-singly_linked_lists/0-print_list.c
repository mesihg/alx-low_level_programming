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

size_t count;
count = 0;

while (h != NULL)
{
if (h->str == NULL)
	printf("[0] %s\n", "(nil)");
else
	printf("[%u] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
