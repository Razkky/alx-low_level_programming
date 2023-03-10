#include "lists.h"
/**
 * sum_dlistint - sum all the data of a linked list
 * @head: pointer to the head of a linked list
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	if (!head)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
