#include "lists.h"

/**
 * free_listint_safe - free listint_t list 
 * @h: pointer to head
 *
 * Return: size of the list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *hold;
	size_t count;

	count = 0;
	current = *h;
	while (current != NULL)
	{
		count++;
		hold = current;
		current = current->next;
		free(hold);
		if (hold < current)
			break;
	}
	*h = NULL;

	return (count);
}
