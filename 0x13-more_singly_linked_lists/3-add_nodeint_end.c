#include "lists.h"
/**
 * add_nodeint_end - add node at the end of a list
 * @head: pointer to the head of a list pointer
 * @n: element to be added to new list
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	new = malloc(sizeof(n));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		*head = new;
	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	if (temp->n != new->n)
		temp->next = new;
	return (new);
}
