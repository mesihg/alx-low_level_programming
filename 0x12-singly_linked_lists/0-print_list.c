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
int count;
count = 0;
ptr = h;
while (ptr != NULL)
{
printf("%d\n", ptr->str);
count++;
ptr = ptr->next;
}
return (count);
}
