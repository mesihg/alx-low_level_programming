#include "lists.h"

/**
 * add_node - add a new node at the beginning
 * @head: pointer to head
 * @str: string to be added
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);

new_node->str = str;

if (*head == NULL)
	*head = new_node;
else
{
	new_node->next = *head;
	*head = new_node;
}
return (*head);
}
