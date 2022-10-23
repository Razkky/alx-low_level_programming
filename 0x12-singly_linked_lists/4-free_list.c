#include "lists.h"
/**
 * free_list - free malloc allocated space
 *@head: pointer to head of linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
