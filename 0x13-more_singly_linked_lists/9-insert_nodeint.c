#include "lists.h"
/**
 * insert_nodeint_at_index - inset new node at a given position
 * @head: pointer to address of head of node
 * @idx: location of new node
 * @n: data of new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *temp, *new, *holder;
	unsigned int index = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		index++;
	}
	if (idx > index)
		return (NULL);
	index = 0;
	temp = *head;
	while (index < idx - 1 && temp != NULL)
	{
		index++;
		temp = temp->next;
	}
	holder = temp->next;
	temp->next = new;
	new->next = holder;
	return (new);
}
