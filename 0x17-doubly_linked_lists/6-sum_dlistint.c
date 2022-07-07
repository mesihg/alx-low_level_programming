#include "lists.h"

/**
 * sum_dlistint - sum of all the data in the linked list
 * @head: pointer to head
 * Return: returns sum of all data in the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
