#include "lists.h"

/**
 * print_listint - prints all the elements of the given list
 * @h: pointer to head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t length = 1;
const listint_t *ptr = h;
while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
length++;
}
return (length);
}