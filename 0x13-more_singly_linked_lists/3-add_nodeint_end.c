#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end
 * @head: pointer to head
 * @n: number input
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *ptr;
new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
	return (NULL);
new_node->n = n;
new_node->next = NULL;
ptr = *head;

if (*head == NULL)
	*head = new_node;
else
{
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new_node;
}

return (new_node);
}
