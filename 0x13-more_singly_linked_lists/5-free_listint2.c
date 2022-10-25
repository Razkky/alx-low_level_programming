#include "lists.h"
/**
 * free_listint2 - free malloc allocated space to list
 * @head: pointer to head of a list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *point = *head;

	while (point != NULL)
	{
		temp = point;
		point = point->next;
		free(temp);
	}
	free(point);
	*head = NULL;
	head = NULL;
}
