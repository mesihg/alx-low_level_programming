#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: pointer to head
 * @str: pointer to string
 *
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *temp;
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
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}

return (*head);
}
