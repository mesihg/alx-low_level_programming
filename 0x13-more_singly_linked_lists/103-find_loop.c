#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head
 *
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *fast, *slow;
fast = head;
slow = head;
if (head != NULL)
	return (NULL);

while (fast != NULL && fast->next != NULL && slow != NULL)
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
