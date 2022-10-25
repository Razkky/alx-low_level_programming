#include "lists.h"
/**
 * sum_listint - add sum of data in a list
 * @head: pointer to head of a node
 * Return: sum of data
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
