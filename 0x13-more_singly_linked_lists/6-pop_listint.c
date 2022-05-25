#include "lists.h"

/**
 * pop_listint - deletes the head of a node of a listint_t
 * @head: pointer to head
 *
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr, *temp;
	int data;

	if (*head == NULL)
		return (0);
	ptr = *head;
	data = ptr->n;
	temp = ptr->next;
	free(ptr);
	*head = temp;
	return (data);
}
