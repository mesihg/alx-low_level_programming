#include "lists.h"

/**
 * deletes the head of a node of a listint_t
 * @head: pointer to head
 *
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	if (*head == NULL)
		return (0);

	else
		{
			ptr = *head;
			*head = *head->next;
			free(ptr);
			return (*head->n);
		}
}
