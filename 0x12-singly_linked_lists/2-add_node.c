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
size_t len;
new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
	return (NULL);

for (len = 0; str[len]; len++)
	;
new_node->str = strdup(str);
new_node->len = len;

if (*head == NULL)
	*head = new_node;
else
{
	new_node->next = *head;
	*head = new_node;
}
return (*head);
}
