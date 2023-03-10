#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a linked list
 * @head: pointer to the head of a linked list
 * @index: the index in refrence
 * @n: elemetn to be added
 * Return: pointer the the nth node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int index, int n)
{
	unsigned int i = 0;
	dlistint_t *temp, *new;

	temp = *head;
	while (i < index - 1 && temp)
	{
		temp = temp->next;
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;

	return (new);
}
