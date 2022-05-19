#include "lists.h"

/**
 * free_list - frees list_t list
 * @head: pointer to head
 *
 * Return: nothing is returned
 */

void free_list(list_t *head)
{
free(head->str);
free(head);
}
