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
temp = head;
while (temp != NULL)
{
temp = head->next;
free(temp->str);
free(temp);
}
}
