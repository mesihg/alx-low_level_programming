#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * *head: pointer to head
 *
 * Return: nothing is returned
 */

void free_listint2(listint_t **head)
{
listint_t *ptr;
if (*head != NULL)
{
while (*head != NULL)
{
ptr = *head;
*head = *head->next;
free(ptr);
}
*head = NULL;
}
}
