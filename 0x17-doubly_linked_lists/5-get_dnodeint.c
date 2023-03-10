#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a linked list
 * @head: pointer to the head of a linked list
 * @index: the index in refrence
 * Return: pointer the the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	temp = head;
	while (i < index && temp)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
