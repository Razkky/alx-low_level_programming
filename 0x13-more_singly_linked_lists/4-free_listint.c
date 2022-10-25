#include "lists.h"
/**
 * free_listint - free malloc allocated space to list
 * @head: pointer to head of a list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
