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
fast = head->next;
slow = head;

while (fast != NULL && fast->next != NULL && slow != NULL)
	{
		if (slow == fast)
		{
			return (slow);
		}
		fast = fasst->next->next;
		slow = slow->next;

	}
return (NULL);
}
