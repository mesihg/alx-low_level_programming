#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of list
 * @head: pointer to head
 * @n: data input integer
 * Return: address of the new element, NULL otherwise
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	temp = *head;


	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = NULL;
	new_node->prev = temp;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_node;
	temp = new_node;

	return (new_node);
}
