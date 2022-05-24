#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a listint_t linked list
 * @head: pointer to head
 * @index: index of a given node
 *
 * Return: return the node at the given index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count;

	for (count = 0; i < index && head != NULL; count++)
	{
		head = head->next;
	}

	return (head);
}
