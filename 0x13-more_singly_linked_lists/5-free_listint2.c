#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head
 *
 * Return: nothing is returned
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	if (head != NULL)
	{
		ptr = *head;
		while ((temp = ptr) != NULL)
		{
			ptr = ptr->next;
			free(temp);
		}
		*head = NULL;
	}
}
