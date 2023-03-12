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

	new = malloc(sizeof(dlistint_t));
	if (!new || !head)
	{
		return (NULL);
	}
	if (index == 0)
	{
		new = add_dnodeint(head, n);
		return (new);
	}
	temp = *head;
	while (i <= index - 1 && temp)
	{
		if (temp->next == NULL && i == index - 1)
		{
			new = add_dnodeint_end(head, n);
			return (new);
		}
		else if (i == index - 1)
		{
			new->n = n;
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			return (new);
		}

		temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
