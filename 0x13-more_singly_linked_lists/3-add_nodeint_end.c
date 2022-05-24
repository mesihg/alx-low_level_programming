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
listint_t *new_node;
new_node = (listint_t *)malloc(sizeof(listint_int));
if (new_node == NULL)
	return (NULL);
new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
	*head = new_node;
else
{
while (*head->next != NULL)
{
*head = *head->next;
}
*head->next = new_node;
}

return (new_node);
}
