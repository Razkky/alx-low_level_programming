#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a list
 * @head: pointer to the first node of a list
 * @index: position of node to b return
 * Return: address t0 nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count = 0;

	temp = head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	temp = head;
	if (count < index)
		return (NULL);
	count = 0;

	while (count < index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
