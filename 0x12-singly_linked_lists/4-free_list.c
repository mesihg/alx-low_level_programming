#include "lists.h"

/**
 * free_list - frees list_t list
 * @head: pointer to head
 *
 * Return: nothing is returned
 */

void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
