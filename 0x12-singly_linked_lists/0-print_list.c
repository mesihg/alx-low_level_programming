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

list_t *ptr;
size_t count;
count = 0;
ptr = h;
while (ptr != NULL)
{
if (ptr->str != NULL)
	printf("[%d] %s\n", h->len, h->str);
else
	printf("[%d] %s\n", 0, "(nil)");
ptr = ptr->next;
count++;
}
return (count);
}
