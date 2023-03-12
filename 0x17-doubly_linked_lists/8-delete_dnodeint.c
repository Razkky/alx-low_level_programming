#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a  particular index
 * @head: pointer to the address of the head of the node
 * @index: the index to b deleted
 * Return: 1 on success -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	int i;

	if (!*head)
		return (-1);

	temp = *head;
	if (temp->next == NULL)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < (int)index - 1; i++)
	{
		temp = temp->next;
	}
	if (temp->next->next == NULL)
	{
		free(temp->next);
		temp->next == NULL;
		return (1);
	}
	if (temp->prev && temp->next)
	{
		temp->next = temp->next->next;
		free(temp->next->prev);
		temp->next->prev = temp;
		return (1);
	}
	if (index == 0)
	{
		temp->next->prev = temp->prev;
		*head = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
