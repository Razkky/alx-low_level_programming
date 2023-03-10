#include "lists.h"
/**
 * free_dlistint - free a double linked list
 * @head: pointer to the head of a linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
