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
	int data;

	if (!(*head) || !head)
		return (0);
	ptr = *head;
	data = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (data);
}
