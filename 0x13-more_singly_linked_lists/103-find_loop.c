#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head
 *
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *fast = head;
listint_t *slow = head;

if (head != NULL)
	return (NULL);

while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}

	}
return (NULL);
}
