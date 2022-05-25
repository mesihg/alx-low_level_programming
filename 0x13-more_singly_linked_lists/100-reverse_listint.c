#include "lists.h"

/**
 * reverse_listint - reverses a listint_t.
 * @head: pointer to head
 *
 * Return: pointer to first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n = NULL;


	if(!head || !(*head))
		return (*head);

	n = (*head)->next;

	while (n->next)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	if (n)
		n->next = p;

	return (*head);
}
