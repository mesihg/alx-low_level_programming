#include "lists.h"

/**
 * add_nodeint - add element at the beginning
 * @head: pointer to head
 * @n: integer value
 *
 * Return: new address element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
	return (NULL);
new_node->n = n;
if (*head == NULL)
	*head = new_node;
else
{
new_node->next = *head;
*head = new_node;
}
free(new_node);
return (*head);
}
