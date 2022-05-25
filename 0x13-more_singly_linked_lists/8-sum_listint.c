#include "lists.h"

/**
 * sum_listint - sums all the data of a listint_t linked list
 * @head: pointer to head
 *
 * Return: sume of all data
 */

int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
	return (0);
while (head != NULL)
{
head = head->next;
sum += head->n;
}
return (sum);
}
